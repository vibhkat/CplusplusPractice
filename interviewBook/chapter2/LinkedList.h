#ifndef LINKEDLIST_H
#define  LINKEDLIST_H
#include<iostream>
#include<fstream>
struct Node;
class LinkedList{
public:
LinkedList():Head(NULL){}
void print();
private:
struct Node{
int data;
Node* next;
};
Node* Head;
};



void print()
{
Node* temp=Head;
if(temp==NULL) std::cout<<"EMPTY LIST"<<std::endl;
else
{
while(temp!=NULL)
{
std::cout<<temp->data<<std::endl;
temp=temp->next;
}
}
}





#endif
