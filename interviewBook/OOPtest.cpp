#include<iostream>
class A{
public:
void print(){ B b;std::cout<<b.i<<std::endl;}
private:
struct B{
int i=2;
};
};


int main()
{
A a;
a.print();
}


/* if we use class instead of struct we have error
test.cpp:7:7: error: ‘int A::B::i’ is private
 int i=2;
       ^
test.cpp:4:32: error: within this context
 void print(){ B b;std::cout<<b.i<<std::endl;}
 so always use struct
 * /*
