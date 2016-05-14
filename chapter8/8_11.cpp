#include<iostream>
#include<vector>
#include<sstream>
 struct PersonInfo
 {
 std::string name;
 std::vector<std::string> phones;
 };
 
 int main()
 {
 std::string line , word;
 //std::istringstream record;
 std::stringstream record(std::stringstream::in);
 std::vector<PersonInfo> people;
 while(getline(std::cin, line))
 {
 PersonInfo info;
 record.str(line);
 record>>info.name;
 while(record>>word)
 {
 info.phones.push_back(word);
  }
 people.push_back(info);
 }
 
 return 2;
 }
