#ifndef TREE_H
#define TREE_H
#include<iostream>
#include<string>
#include<queue>
#include<vector>
struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* GetNewNode(const int& );
void insert(Node* &, const int&);
bool Search(Node* &, const int&);
int Min( Node* &);
int Max( Node* &);
int Height(Node* &);
void levelOrder( Node* & );
void preOrder(Node* &);
void inOrder(Node* &);
void postOrder(Node* &);
void isBst(Node* &, std::vector<int>& );

Node* GetNewNode(const int& data)
{
    Node*  temp=new Node;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}


void insert( Node* &root, const int& data)
{
    if(root==  NULL)
    {
        root=GetNewNode(data);
	return;
    }

    else if(data<=root->data)
    {
        insert(root->left, data);
    }

    else if(data>root->data)
    {
        insert(root->right, data);
    }

}





bool Search(Node* & ptr, const int& data)
{
    if(ptr==NULL) 
    {
        std::cout<<"EMPTY"<<std::endl;
        return false;
    }
    else if(ptr->data == data)
    {
        std::cout<<"FOUND"<<std::endl;
        return true;
    }
    else if(data<ptr->data)
    {
        return Search(ptr->left, data);
    }

    else if(data>ptr->data)
    {
        return Search(ptr->right, data);
    }
}


int Min( Node* &root)
{
    if(root==NULL) std::cout<<"ERROR, TREE EMPTY"<<std::endl;
    else if(root->left == NULL) return root->data;
    else if(root->left != NULL) return Min(root->left);
}  

int Max( Node* &root)
{
    if(root==NULL) std::cout<<"ERROR, TREE EMPTY"<<std::endl;
    else if(root->right == NULL) return root->data;
    else if(root->right != NULL) return Max(root->right);
}  

int Height(Node* & ptr)
{
    if(ptr==NULL) return -1;
    int Left=Height(ptr->left);
    int Right=Height(ptr->right);
    return std::max(Left,Right)+1;
}


void levelOrder( Node* & root)   //or BFS breadth first strategies
{
    if(root==NULL) return;
    std::queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* current=q.front();
        std::cout<<current->data<<" ";
        if(current->left !=NULL) q.push(current->left);
        if(current->right !=NULL) q.push(current->right);  //no else if statement, then this will become linked with previous if statement
        q.pop();
    }
}

void preOrder(Node* & root)
{
    if (root==NULL) return;
    std::cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* & root)                                                     
{                                                                               
    if (root==NULL) return;                                                         
    inOrder(root->left);
    std::cout<<root->data<<" ";                                     
    inOrder(root->right);                                                          
} 

void postOrder(Node* & root)
{
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    std::cout<<root->data<<" ";
}


void isBst(Node* & root, std::vector<int>& v)
{
    if(root==NULL) return;
    isBst(root->left,v);
    v.push_back(root->data);
    isBst(root->right,v);
}

#endif
