#include"Quote.h"
#include"Disc_Quote.h"
#include"Bulk_Quote.h"
#include<memory>
#include<vector>
int main(int argc, char** argv)
{
std::vector<std::shared_ptr<Quote>> basket;
basket.push_back(std::make_shared<Quote>("0-201",50));
basket.push_back(std::make_shared<Bulk_quote>("0-202",50,10,0.25));
std::cout<<basket.back()->net_price(15)<<std::endl;
return 3;
}
