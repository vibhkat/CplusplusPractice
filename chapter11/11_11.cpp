#include<vector>
#include<set>
#include"SalesDataClass.h"
int main()
{

std::multiset<Sales_data, bool (*)(const Sales_data &, const Sales_data &)> bookstore(compareIsbn);


}
