#include<iostream>
class DoubleLinkedList{
private:
struct Node{
    int data;
    Node* prev;
    Node* next;
};
Node* Head=NULL;
Node* Tail=NULL;

public:
int addNode_back(int );
std::ostream& displayListForward(std::ostream& );
std::ostream& displayListReverse(std::ostream& );
int addNode_front(int);
int addNode(int, int );
int deleteNode_back();
int deleteNode_front();
int deleteNode(int );
};
//writng and reading from a file are same way as single linked list

int main(int argc, char **argv)
{
	DoubleLinkedList d;
    d.addNode_back(1);
    d.addNode_back(2);
    d.addNode_back(3);
    d.displayListForward(std::cout)<<std::endl;
    d.displayListReverse(std::cout)<<std::endl;
    d.addNode_front(9);
    d.addNode_front(10);
    d.displayListForward(std::cout)<<std::endl;
    d.addNode(67,3);
	d.deleteNode_back();
	d.displayListForward(std::cout)<<std::endl;
	d.deleteNode_front();
    d.displayListForward(std::cout)<<std::endl;
	d.deleteNode(2);
	d.displayListForward(std::cout)<<std::endl;
    
    
  //  displayListReverse(std::cout, Tail)<<std::endl;
    
       return 2;
}


std::ostream& DoubleLinkedList::displayListForward(std::ostream& os)
{
	Node* ptr = Head;
    while (ptr!=NULL)
    {
        os<<ptr->data<<" ";

        ptr=ptr->next;
    }
    return os;
}

std::ostream& DoubleLinkedList::displayListReverse(std::ostream& os)
{
	Node* ptr = Tail;
    while (ptr!=NULL)
    {
        os<<ptr->data<<" ";

        ptr=ptr->prev;
    }
    return os;
}


int DoubleLinkedList::addNode_back(int value)
{
    Node* temp= new Node;
    temp->data=value;
    temp->prev=NULL;
    temp->next=NULL;

    if(Head==NULL)
    {
        Head=temp;
        Tail=temp;
    }

    else
    {
        temp->prev=Tail;
        Tail->next=temp;	
        Tail=temp;
    }

    return 2;
}


int DoubleLinkedList::addNode_front(int value)
{
	Node* temp= new Node;
    temp->data=value;
    temp->prev=NULL;
    temp->next=NULL;
	if(Head==NULL)
    {
        Head=temp;
        Tail=temp;
    }
    else
    {
		temp->next=Head;
		Head->prev=temp;
		Head=temp;
		
		}
	
	return 1;
	}


int DoubleLinkedList::addNode(int value, int place)
{
    Node* temp=new Node;
    temp->data=value;
    temp->next=NULL;
    temp->prev=NULL;
    int size=1;
    if(Head==NULL)
    {
        size=0;
    }
    else
    {
        Node* n=Head;
        while(n->next != NULL)
        {
            ++size;
            n=n->next;
        }
    }



    if(place>size)
    {
        std::cout<<"OUT OF RANGE :putting new node at the end "<<std::endl;
        addNode_back(value);		
    }
    else if(place==1)
    {
        std::cout<<"OUT OF RANGE :putting new node at the front "<<std::endl;
        addNode_front(value);		
    }

    else
    {
        int count=0;
        Node* temp2=Head;
        while(temp2->next != NULL)
        {
            ++count;
            if(count==(place-1))
            {
				Node* front=temp2;
				Node* back=temp2->next;
                temp->next=back;
                temp->prev=front;
                front->next=temp;
                back->prev=temp;
                return 3;
            }
            temp2=temp2->next;	
        }
    }
    return 3;
}

int DoubleLinkedList::deleteNode_back()
{
    if (Head==NULL)
    {
        std::cout<<"LIST is empty"<<std::endl;
    }
    else
    {
		Node* temp1=Head;
		if(temp1->next ==NULL)
        {
            delete temp1;
            Head=NULL;
            Tail=NULL;
        }
        else
        {
			Node* temp=Tail;
			Tail=temp->prev;
			delete temp;
			Tail->next=NULL;
		}
    }
    return 6;
}




int DoubleLinkedList::deleteNode_front()
{
    if (Head==NULL)
    {
        std::cout<<"LIST is empty"<<std::endl;
    }
    else
    {
        Node* temp=Head;
        if(temp->next==NULL)
        {
            delete temp;
            Head=NULL;
            Tail=NULL;			 
        }
        else
        {
			Head=temp->next;
			Head->prev=NULL;
            delete temp;
        }

    } 
    return 5;		
}


int DoubleLinkedList::deleteNode(int place)
{
    if (Head==NULL)
    {
        std::cout<<"LIST is empty"<<std::endl;
    }

    else
    {
        int size=1;
        Node* n=Head;
        while(n->next != NULL)
        {
            ++size;
            n=n->next;
        }


        if(place ==1)
        {
            deleteNode_front();
        }
        else if(place>=size)
        {
            deleteNode_back();
        }
        else
        {
            int count=0;
            Node* temp1=Head;
            while(temp1->next != NULL)
            {
++count;
                if(count== (place-1))
                {
					Node* front=temp1;
					Node* del=temp1->next;
                    Node* back=del->next;
                    front->next=back;
                    back->prev=front;
                    delete del;
                    return 3;
                }

                ++count;
                temp1=temp1->next;	
            }		
        }
    }
    return 3;
}
