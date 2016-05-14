#include<iostream>
#include<cstdlib>

struct numbered{
numbered():mysn(rand()){}
numbered(const numbered& oig):mysn(rand()){}
int mysn;
};

void f( numbered );



int main()
{
	numbered a, b=a,c=b;
	std::cout<<a.mysn<<" "<<b.mysn<<" "<<c.mysn<<std::endl;
	f(a); f(b); f(c);
	return 2;
	}

void f( numbered s){std::cout<<s.mysn<<std::endl;}
