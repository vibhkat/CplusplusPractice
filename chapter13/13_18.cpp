#include<iostream>
#include<string>



class Employee{
friend void print(const Employee&);
public:
static int n;
Employee(){n++;}
Employee(std::string s):name(s){n++;}
Employee(const Employee&)=delete;
Employee& operator =(const Employee&)=delete;
void print(){std::cout<<name<<" "<<id<<std::endl;}
private:
std::string name;
const int id=n;
};

void print(const Employee& e)
{
std::cout<<e.name<<" "<<e.id<<std::endl;	
}




int Employee::n=1;


int main(int argc, char**argv)
{
	Employee one ("vibhanshu"), two("second"),three;
	one.print();
	two.print();
	three.print();
	print(one); print(two);print(three);
	
	
	}
