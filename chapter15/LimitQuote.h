#ifndef LIMITQUOTE_H
#define LIMITQUOTE_H
#include"Quote.h"
class Limit_quote: public Quote {
public:
Limit_quote()=default;
Limit_quote(const std::string& book, double p, std::size_t qty, double disc):Quote(book,p), min_qty(qty), discount(disc){}
double net_price(std::size_t ) const override;

void debug() const override{std::cout<<"ISBN: "<<isbn()<<" price: "<<price<<" Min Qty: "<<min_qty<<" discount: "<<discount<<std::endl;}

private:
std::size_t min_qty=0;
double discount=0.0;
};


double Limit_quote::net_price(std::size_t cnt) const
{
if(cnt>=min_qty) return (min_qty*(1-discount)*price)+((cnt-min_qty)*price);
else return cnt*(1-discount)*price;
}



#endif
