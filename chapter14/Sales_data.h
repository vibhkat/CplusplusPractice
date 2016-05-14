#ifndef SALESDATA_H
#define SALESDATA_H
#include<string>
#include<iostream>

class Sales_data
{
    friend std::ostream &print(std::ostream &, const Sales_data &);
    friend Sales_data add(const Sales_data&, const Sales_data&);
    friend std::istream& read(std::istream &, Sales_data &);
    friend std::ostream& operator<<(std::ostream&, const Sales_data&);
    friend std::istream& operator>>(std::istream&, Sales_data&);
    friend bool operator==(const Sales_data&,const Sales_data&);
    friend bool operator!=(const Sales_data&,const Sales_data&);
    friend Sales_data operator+(const Sales_data&,const Sales_data&);

    public:
    //Sales_data()=default; //default constructor, all the members are initailised to default values
    //Sales_data(const std::string &s):bookNo(s){}  //constructor
    Sales_data(const std::string &s,unsigned n, double p):bookNo(s),units_sold(n),revenue(p*n){} //constructor
    Sales_data():Sales_data(" ",0 ,0 ){}
    Sales_data(const std::string& s):Sales_data(s,0,0){}
    Sales_data(std::istream &); //constructor declaration
    std::string isbn() const{ return bookNo; }
    Sales_data& combine(const Sales_data&);
    Sales_data& operator+=(const Sales_data&);
    Sales_data& operator=(const std::string&);
    inline double avg_price() const;   
    operator std::string() const{return bookNo;}
    operator double() const{return units_sold;} 

    private:
    std::string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;
};

Sales_data& Sales_data::operator=(const std::string& s)
{
 *this=Sales_data(s);
 return *this;
}

Sales_data& Sales_data::operator+=(const Sales_data& rhs)
{
    units_sold+=rhs.units_sold;
    revenue+=rhs.revenue;
    return *this;
}

std::ostream &print(std::ostream &, const Sales_data &);
Sales_data add(const Sales_data&, const Sales_data&);
Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold+=rhs.units_sold;
    revenue+=rhs.revenue;
    return *this;	
}


inline double Sales_data::avg_price() const
{
    if(units_sold)return revenue/units_sold;
    else return 0;
}


std::istream& read(std::istream &is, Sales_data &item)
{
    double price=0;
    is>>item.bookNo>>item.units_sold>> price;
    item.revenue=price*item.units_sold;
    return is;
}

std::ostream& print(std::ostream &os, const Sales_data &item)
{
    os<<item.isbn()<<" "<<item.units_sold<<" "<<item.revenue<<" "<<item.avg_price();
    return os;
}


Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum=lhs;
    sum.combine(rhs);
    return sum;
}


Sales_data::Sales_data(std::istream &is):Sales_data()
{
    read(is, *this);
}

inline std::ostream& operator<<(std::ostream& os,const Sales_data& item)
{
    os<<item.isbn()<<" "<<item.units_sold<<" "<<item.revenue<<" "<<item.avg_price();
    return os;
}

inline std::istream& operator>>(std::istream& is, Sales_data& s)
{
    double price;
    is>>s.bookNo>>s.units_sold>>price;
    if(is)
        s.revenue=s.units_sold*price;
    else
        s=Sales_data();
    return is;
}


inline bool operator==(const Sales_data& lhs ,const Sales_data& rhs)
{
    return lhs.isbn()==rhs.isbn() &&
        lhs.units_sold==rhs.units_sold &&
        lhs.revenue==rhs.revenue;
}

inline bool operator!=(const Sales_data& lhs ,const Sales_data& rhs)
{
    return !(lhs==rhs);
}


inline Sales_data operator+(const Sales_data& lhs ,const Sales_data& rhs)
{

Sales_data sum=lhs;
sum+=rhs;
return sum;
}
#endif

