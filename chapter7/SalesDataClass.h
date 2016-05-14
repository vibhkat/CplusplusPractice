#ifndef SALESDATACLASS_H
#define SALESDATACLASS_H
#include<string>

class Sales_data
{
friend std::ostream &print(std::ostream &, const Sales_data &);
friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::istream& read(std::istream &, Sales_data &);

public:
//Sales_data()=default; //default constructor, all the members are initailised to default values
//Sales_data(const std::string &s):bookNo(s){}  //constructor
Sales_data(const std::string &s,unsigned n, double p):bookNo(s),units_sold(n),revenue(p*n){} //constructor
Sales_data():Sales_data(" ",0 ,0 ){}
Sales_data(const std::string& s):Sales_data(s){}
Sales_data(std::istream &); //constructor declaration
std::string isbn() const{ return bookNo; }
Sales_data& combine(const Sales_data&);
inline double avg_price() const;    

private:
std::string bookNo;
unsigned units_sold=0;
double revenue=0.0;
};

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


#endif

