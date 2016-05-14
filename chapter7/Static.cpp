#include<iostream>

class Dummy{
public:
static int n;
Dummy(){n++;};
~Dummy(){n--;};
};


int Dummy::n=0;


int main()
{
Dummy a;
Dummy b[5];
Dummy *c=new Dummy;
std::cout<<a.n<<'\n';
delete c;
std::cout<<Dummy::n<<std::endl;
return 0;
}
