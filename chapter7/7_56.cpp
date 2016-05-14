#include<iostream>

class Account{
	public:
	void calculate(){amount+= amount * interestRate;}
	static double rate(){return interestRate;}  //declaring and defining static member function
	static void rate(double); //declaring static member function
	
	
	private:
	std::string owner;
	double amount;
	static double interestRate;  //declaring static member function
	static double initRate();	//declaring static member function
	};

double Account::interestRate=30;

void Account::rate(double newRate)
{interestRate=newRate;   }


int main(int argc, char *argv[])
{
	std::cout<<Account::rate()<<std::endl;
Account::rate(50);
std::cout<<Account::rate()<<std::endl;
//std::cout<<Account::interestRate<<std::endl;
	return 0;
	}
