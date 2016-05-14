#include<vector>
#include<iostream>
#include<memory>
std::shared_ptr<std::vector<int> >vector();
int push_back(const std::shared_ptr<std::vector<int> > &);
std::ostream& print(const std::shared_ptr<std::vector<int> > &);

int main()
{
std::shared_ptr<std::vector<int> > v=vector();
std::cout<<v.use_count()<<std::endl;
push_back(v);
std::cout<<v.use_count()<<std::endl;
print(v)<<std::endl;
std::cout<<v[1]<<std::endl;
return 5;
}



std::shared_ptr<std::vector<int> >  vector()
{
return std::make_shared<std::vector<int> > ();
}


int push_back(const std::shared_ptr<std::vector<int> >& v)
{
	std::cout<<v.use_count()<<std::endl;
int i;
while(std::cin>>i)
{
v->push_back(i);
}
return 6;
}

std::ostream& print(const std::shared_ptr<std::vector<int> >& v)
{
	std::cout<<v.use_count()<<std::endl;
	for(int i=0; i!= (int)v->size(); ++i)
	std::cout<<(*v)[i]<<" ";
	return std::cout;
	}
