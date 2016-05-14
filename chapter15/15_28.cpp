#include"Quote.h"
#include"Disc_Quote.h"
#include"Bulk_Quote.h"
#include<vector>
int main(int argc, char** argv)
{
std::vector<Quote> basket;
basket.push_back(Quote("0-201",50));
basket.push_back(Bulk_quote("0-202",50,10,0.25));
std::cout<<basket.back().net_price(15)<<std::endl;
return 3;
}
