#include<memory>
int main()
{
std::weak_ptr<int> w1;
std::weak_ptr<int> w2=w1;
}
