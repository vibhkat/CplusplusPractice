#include<string>
#include<algorithm>
#include<iostream>

bool isShorter(const std::string&, const std::string& );
void elimDups(std::vector<std::string>& );
void print(std::vector<std::string>& );
int main()
{
std::vector<std::string> s {"the","quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
elimDups(s);
print(s);
stable_sort(s.begin(), s.end(), isShorter);
print(s);
}

void elimDups(std::vector<std::string>& s)
{
	sort(s.begin(), s.end());//,isShorter);
	print(s);
std::vector<std::string>::iterator end_unique=unique(s.begin(), s.end());
	print(s);
s.erase(end_unique, s.end());

	}

void print(std::vector<std::string>& s)
{
	for(const std::string& a:s)
std::cout<<a<<" ";
std::cout<<std::endl;
	}

bool isShorter(const std::string& s1, const std::string& s2)
{
return s1.size()<s2.size();
}
