#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include<string>

struct Person
{

Person()=default;
Person(const std::string &s1, const std::string &s2): name(s1), address(s2){}
Person(std::istream&);
std::string infoName() const {return name;}
std::string infoAddress() const {return address;}
private:
std::string name;
std::string address;
};

std::istream &read(std::istream &, Person &);
std::ostream &print(std::ostream &, const Person &);



std::istream &read(std::istream &is, Person &p)
{
	is>>p.name;//>>p.address;
	getline(is,p.address);
	return is;
	}

std::ostream &print(std::ostream &os, const Person &p)
{
	os<<p.infoName()<<" "<<p.infoAddress();
	return os;
	}


Person::Person (std::istream &is)
{
read(is, *this);
}




#endif
