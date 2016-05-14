#include<iostream>
#include<fstream>
int main()
{
/*	std::ofstream out("my_err");
if ( out )
  std::clog.rdbuf(out.rdbuf());
else
  std::cerr << "Error while opening the file" << std::endl;

    std::clog<<"this is error"<<std::endl;*/
std::cout<<"/*";
std::cout<<"*/";
std::cout<</*"/*"*/;
std::cout<</* "*/ "/* "/*" */;

    return 0;
}
