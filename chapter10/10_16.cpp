#include<string>
#include<algorithm>
#include<iostream>

bool isShorter(const std::string&, const std::string& );
void elimDups(std::vector<std::string>& );
void print(std::vector<std::string>& );
void biggies(std::vector<std::string>&, std::string::size_type);
int main()
{
std::vector<std::string> s {"the","quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
biggies(s,4);
}

void biggies(std::vector<std::string>& s, std::string::size_type sz)
{
	elimDups(s);
	stable_sort(s.begin(), s.end(), [](const std::string&a, const std::string&b ){return a.size()<b.size(); });
	print(s);
	auto wc=find_if(s.begin(), s.end(), [sz](const std::string& a)->int{return a.size()>=sz;});
	for_each(wc,s.end(),[](const std::string& s){std::cout<<s<<" "; });
	std::cout<<std::endl;
}

void elimDups(std::vector<std::string>& s)
{
	sort(s.begin(), s.end());//,isShorter);
	print(s);
std::vector<std::string>::iterator end_unique=unique(s.begin(), s.end());
	print(s);
s.erase(end_unique, s.end());
print(s);
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
