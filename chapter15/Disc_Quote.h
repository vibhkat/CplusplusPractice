#ifndef DISC_QUOTE_H
#define DISC_QUOTE_H
#include"Quote.h"
class Disc_quote: public Quote {
public:
Disc_quote()=default;
Disc_quote(const std::string& book, double p, std::size_t qty, double disc):Quote(book,p), quantity(qty), discount(disc){}
double net_price(std::size_t ) const =0;
Disc_quote(const Disc_quote& b):Quote(b),quantity(b.quantity),discount(b.discount){std::cout<<"In DISC copy constructor"<<std::endl;}
Disc_quote& operator=(const Disc_quote&);
protected:
std::size_t quantity=0;
double discount=0.0;
};


Disc_quote& Disc_quote::operator=(const Disc_quote& rhs)
{
Quote::operator=(rhs);
quantity=rhs.quantity;
discount=rhs.discount;
std::cout<<"In DISC copy Assignment "<<std::endl;
return *this;
}

#endif
