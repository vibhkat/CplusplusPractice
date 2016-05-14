#include<memory>
#include<iostream>
void process(std::shared_ptr<int> ptr);


int main()
{
std::shared_ptr<int> p(new int(42));
	std::cout<<p.use_count()<<std::endl;

process(std::shared_ptr<int>(p.get()));
std::cout<<p.use_count()<<std::endl;
std::cout<<*p<<std::endl;

return 5;
}



void process(std::shared_ptr<int> ptr)
{
std::cout<<ptr.use_count()<<std::endl;

}
