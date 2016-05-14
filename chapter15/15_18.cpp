#include<iostream>
class Base{
public:	
	void pub_mem(){std::cout<<" YES"<<std::endl;};
protected:
	int prot_mem;
private:
	char priv_mem;
};


struct Pub_Derv: public Base{
int f(){return prot_mem;}
void memfcn(Base& b){b=*this;}
};

struct Priv_Derv: private Base{
int f1(){return prot_mem;}
void memfcn(Base& b){b=*this;}
};

struct Prot_Derv: protected Base{
int f1(){return prot_mem;}
void memfcn(Base& b){b=*this;}
};

struct Derived_from_public: public Pub_Derv{
int use_base(){return prot_mem;}
void memfcn(Base& b){b=*this;}
};

struct Derived_from_protected: public Prot_Derv{
int use_base(){return prot_mem;}
void memfcn(Base& b){b=*this;}
};

struct Derived_from_Private: public Priv_Derv{
void memfcn(Base& b){b=*this;}
};



int main()
{
Pub_Derv d1; Prot_Derv d3; Priv_Derv d2;
Derived_from_public dd1;Derived_from_Private dd2; Derived_from_protected dd3;
Base *p=&d1;
p=&d2;
p=&d3;
p=&dd1;
p=&dd2;
p=&dd3;

return 4;
}



/*   Answer:
15_18.cpp:2:11: error: ‘class Base Base::Base’ is inaccessible
 class Base{
           ^
15_18.cpp:38:13: error: within this context
 void memfcn(Base& b){b=*this;}
             ^
15_18.cpp: In member function ‘void Derived_from_Private::memfcn(Base&)’:
15_18.cpp:38:23: error: ‘Base’ is an inaccessible base of ‘Derived_from_Private’
 void memfcn(Base& b){b=*this;}
                       ^
15_18.cpp: In function ‘int main()’:
15_18.cpp:48:2: error: ‘Base’ is an inaccessible base of ‘Priv_Derv’
 p=&d2;
  ^
15_18.cpp:49:2: error: ‘Base’ is an inaccessible base of ‘Prot_Derv’
 p=&d3;
  ^
15_18.cpp:51:2: error: ‘Base’ is an inaccessible base of ‘Derived_from_Private’
 p=&dd2;
  ^
15_18.cpp:52:2: error: ‘Base’ is an inaccessible base of ‘Derived_from_protected’
 p=&dd3;
`
 */
