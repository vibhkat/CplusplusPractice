#include<iostream>
void f();
void f(int);
void f(int ,int);
void f(double , double);

int main()
{
f(2.56,42);
f(42);
f(42,0);
f(2.56,3.14);
return 9;
}


void f()
{
std::cerr<<"1st"<<std::endl;
}


void f(int a, int b)
{
std::cerr<<"3rd"<<std::endl;
}

void f(int a)
{
std::cerr<<"2nd"<<std::endl;
}

void f(double a , double b)
{
std::cerr<<"4th"<<std::endl;
}
