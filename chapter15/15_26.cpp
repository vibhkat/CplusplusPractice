#include"Quote.h"
#include"Disc_Quote.h"
#include"Bulk_Quote.h"
int main()
{
Bulk_quote bulk("efgh",100.0,4,.5);	
print_total(std::cout, bulk, 20);
Quote basic ("abcd",100.0);
Quote q1(basic);
basic=q1;
Bulk_quote b1(bulk);
bulk=b1;
}
