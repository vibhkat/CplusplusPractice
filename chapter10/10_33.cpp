#include<iostream>
#include<fstream>
#include<iterator>
int main()
{
std::fstream in("./infile1",std::fstream::in);
std::istream_iterator<int> i(in), eof;
std::fstream out1("./odd.txt",std::fstream::out);
std::fstream out2("./even.txt",std::fstream::out);
std::ostream_iterator<int> o1(out1," "), o2(out2," ");
while(i!=eof)
{
if((*i)%2 ==0) 
o2=(*i);
else 
o1=(*i);
++i;
}
}












