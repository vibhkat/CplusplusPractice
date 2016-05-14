#ifndef LIMIT_QUOTE_H
#define LIMIT_QUOTE_H
#include"Disc_Quote.h"
class Limit_quote: public Disc_quote{
public:
Limit_quote()=default;
Limit_quote(const std::string& book, double price, std::size_t qty, double disc):Disc_quote(book, price,qty,disc){}
double net_price(std::size_t ) const override;
};

double Limit_quote::net_price(std::size_t cnt) const
{
if(cnt>=quantity) return (quantity*(1-discount)*price)+((cnt-quantity)*price);
else return cnt*(1-discount)*price;
}

#endif
