#include<string>
#include<iostream>
int main(int argc, char** argv)
{
std::string s("aabcccccaaa"),sNew;
int count=1;
for(int i=1; i!=(int)s.size(); ++i)
{
if(s[i]==s[i-1])
{
++count;
}
else if(s[i]!=s[i-1])
{
sNew+=(s[i-1]+std::to_string(count));
count=1;
}
}
sNew+=(s[(int)s.size()-1]+std::to_string(count));

std::cout<<((sNew.size()>s.size())?s:sNew)<<std::endl;

return 3;
}
