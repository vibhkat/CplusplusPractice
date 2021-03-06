#ifndef QUOTE_H
#define QUOTE_H
#include<iostream>
#include<string>

class Quote{
friend double print_total(std::ostream&, const Quote& , size_t );

    public:
        Quote()=default;
        Quote(const std::string& book, double sales_price):bookNo(book),price(sales_price){}
        std::string isbn() const{return bookNo;}
        virtual double net_price(std::size_t n) const{std::cout<<"Quote net price"<<std::endl;return n*price;}
        virtual ~Quote()=default;
	virtual void debug() const {std::cout<<"ISBN: "<<bookNo<<" price: "<<price<<std::endl;}
	Quote(const Quote& q):bookNo(q.bookNo),price(q.price){std::cout<<"Quote copy Constructor..."<<std::endl;}
	Quote& operator=(const Quote&);
	virtual Quote* clone() const& {return new Quote(*this);}
	virtual Quote* clone() const&& {return new Quote(std::move(*this));}

    private:
        std::string bookNo;
    protected:
        double price=0.0;
};

Quote& Quote::operator=(const Quote& rhs)
{
bookNo=rhs.bookNo;
price=rhs.price;
std::cout<<"Quote copy ASSIGNMENT Constructor..."<<std::endl;
return *this;
}


double print_total(std::ostream& os, const Quote& item, size_t n)
{
double ret=item.net_price(n);
os<<"ISBN: "<<item.isbn()<<" # sold: "<<n<<" total due: "<<ret<<std::endl;
return ret;
}

#endif
