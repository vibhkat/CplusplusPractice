#include<iostream>
#include"tree.h"
#include<vector>
int main()
{
Node* root=NULL;
//Min(root);
//Max(root);
insert(root,15);
insert(root,13);
insert(root,24);
insert(root,24);
insert(root,100);
insert(root,240);
Search(root,24);
Search(root,15);
Search(root,100);
Search(root,240);
std::cout<<"MINIMUM :"<<Min(root)<<std::endl;
std::cout<<"MAXIMUM :"<<Max(root)<<std::endl;
std::cout<<"HEIGHT :"<<Height(root)<<std::endl;

levelOrder(root);
std::cout<<std::endl;
preOrder(root);
std::cout<<std::endl;
inOrder(root);
std::cout<<std::endl;
postOrder(root);
std::cout<<std::endl;
std::vector<int> v;
isBst(root, v);

for(const int& a:v)
std::cout<<a<<" ";
std::cout<<std::endl;


return 5;
}
