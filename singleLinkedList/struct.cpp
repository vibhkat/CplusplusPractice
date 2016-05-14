#include<iostream>
#include<fstream>
#include<string>

class LinkedList{

private:
struct Node{
    int data;
    Node* next;	
};
Node* Start_ptr=NULL;

public:
std::ostream& displayList(std::ostream& );
int addNode_back(int);
int addNode_front(int);
int addNode(int, int);
int deleteNode_front();
int deleteNode_back();
int deleteNode(int );
int write(const std::string & );
int load(const std::string & );
int sortAscending();
};



int main()
{
	LinkedList l;
    l.addNode_back(1);
    l.addNode_back(2);
    l.addNode_front(4);
    l.addNode_back(9);
    l.addNode_front(45);
    l.displayList(std::cout)<<std::endl;
    l.addNode(32,3);
    l.displayList(std::cout)<<std::endl;
    //deleteNode_front();
    l.deleteNode(5);
    l.displayList(std::cout)<<std::endl;

    l.write("list.ls" );
    //Node* newPtr=NULL;
    LinkedList l1;
    l1.load("list.ls");
    l1.displayList(std::cout)<<std::endl;
    l1.sortAscending();
    l1.displayList(std::cout)<<std::endl;



    return 4;
}


std::ostream& LinkedList::displayList(std::ostream& os)
{
	Node* ptr = Start_ptr;
    while (ptr!=NULL)
    {
        os<<ptr->data<<" ";

        ptr=ptr->next;
    }
    return os;
}


int LinkedList::addNode_back(int value)
{
    Node* temp=new Node;
    temp->data=value;
    temp->next=NULL;

    if(Start_ptr== NULL)
        Start_ptr=temp;

    else
    {
        Node* temp2=Start_ptr;
        while(temp2->next != NULL)
        {
            temp2=temp2->next;	
        }
        temp2->next=temp;
    }

    return 3;
}

int LinkedList::addNode_front(int value)
{

    Node* temp=new Node;
    temp->data=value;
    temp->next=NULL;
    if(Start_ptr==NULL)
    {
        Start_ptr=temp;
    }

    else
    {	
        temp->next=Start_ptr;
        Start_ptr=temp;
    }
    return 3;
}

int LinkedList::addNode(int value, int place)
{
    Node* temp=new Node;
    temp->data=value;
    temp->next=NULL;

    int size=1;
    if(Start_ptr==NULL)
    {
        size=0;
    }
    else
    {
        Node* n=Start_ptr;
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
        Node* temp2=Start_ptr;
        while(temp2->next != NULL)
        {
            ++count;
            if(count==(place-1))
            {
                Node* current=temp2->next;
                temp->next=current;
                temp2->next=temp;
                return 3;
            }
            temp2=temp2->next;	
        }
    }
    return 3;
}



int LinkedList::deleteNode_front()
{
    if (Start_ptr==NULL)
    {
        std::cout<<"LIST is empty"<<std::endl;
    }
    else
    {
        Node* temp=Start_ptr;
        if(temp->next==NULL)
        {
            delete temp;
            Start_ptr=NULL;			 
        }
        else
        {
            Start_ptr=Start_ptr->next;
            delete temp;
        }

    } 
    return 5;		
}

int LinkedList::deleteNode_back()
{
    if (Start_ptr==NULL)
    {
        std::cout<<"LIST is empty"<<std::endl;
    }
    else
    {
        Node* temp1= Start_ptr, *temp2;
        if(temp1->next ==NULL)
        {
            delete temp1;
            Start_ptr=NULL;
        }
        else
        {		
            while(temp1->next !=NULL)
            {
                temp2=temp1;
                temp1=temp1->next;			
            }
            temp2->next=NULL;
            delete temp1;		
        }
    }
    return 6;
}



int LinkedList::deleteNode(int place)
{
    if (Start_ptr==NULL)
    {
        std::cout<<"LIST is empty"<<std::endl;
    }

    else
    {
        int size=1;
        Node* n=Start_ptr;
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
            int count=1;
            Node* temp1=Start_ptr, *temp2;
            while(temp1->next != NULL)
            {

                if(count== (place-1))
                {
                    temp2=temp1->next;
                    temp1->next=temp2->next;
                    delete temp2;
                    return 3;
                }

                ++count;
                temp1=temp1->next;	
            }		
        }
    }
    return 3;
}


int LinkedList::write(const std::string& filename)
{ 
	Node* ptr = Start_ptr;
    std::fstream write(filename, std::fstream::out);
    while (ptr!=NULL)
    {
        write<<ptr->data<<std::endl;

        ptr=ptr->next;
    }

    return 4;
}


int LinkedList::load(const std::string &filename)
{
    std::fstream read(filename, std::fstream::in);
    //Node* Start_ptr1=NULL; //same as add_back funtion.
    if(read.is_open())
    {
        int value;
        while(read>>value)
        {
            Node* temp=new Node;
            temp->data=value; 
            temp->next=NULL;

            if(Start_ptr== NULL)
                Start_ptr=temp;

            else
            {
                Node* temp2=Start_ptr;
                while(temp2->next != NULL)
                {
                    temp2=temp2->next;	
                }
                temp2->next=temp;
            }

        }
    }
    else std::cout<<" unable to open file"<<std::endl;

    return 3;     //can either return the new start pointer and save it main program in new pointer or use the refrence as done in this function.
}




int LinkedList::sortAscending()
{
	for(Node* i=Start_ptr; i->next != NULL; i=i->next)
		{
	for(Node* j= i->next; j!= NULL; j=j->next)
	{
		if(i->data > j->data)
		{
		int value=i->data;
		i->data= j->data;
		j->data= value;
		}
		}	
				
		}
		
	return 4;
	}

