#include<iostream>
#include<cstdlib>
class numbered{
void f(numbered );
public:
numbered(const numbered& oig):mysn(rand()){}
int mysn
};

void f(numbered s){std::cout<<s.mysn<<std::endl;}


int main()
{
	numbered a, b=a,c=b;
	f(a); f(b); f(c);
	return 2;
	}
