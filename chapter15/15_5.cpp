#include"Quote.h"
#include"BulkQuote.h"
#include"LimitQuote.h"
int main()
{
	Quote basic ("abcd",100.0);
	Bulk_quote bulk("efgh",100.0,4,.5);
	Limit_quote limit("ijklm",100,10,.5);
	print_total(std::cout, basic, 20);
print_total(std::cout, bulk, 20);

print_total(std::cout, limit, 20);
Quote &r=limit;
print_total(std::cout, r, 20);
basic.debug();
bulk.debug();
limit.debug();

	}
