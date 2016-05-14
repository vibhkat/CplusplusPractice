#ifndef BLOB_H
#define BLOB_H
#include<iostream>
#include<stdexcept>
#include<memory>
#include<initializer_list>
#include<string>
#include<vector>
template <typename T >
class Blob{
	public:
	typedef T value_type;
	typedef typename std::vector<T>::size_type size_type;
	
	//constructors
	Blob();
	Blob(std::initializer_list<T> i1);
	
	// number of elements in the Blob
	size_type size() const {return data->size();}
	bool empty() const {return data->empty();}

	// add and remove element
	void push_back(const T& t){ data->push_back(t);}
	void pop_back();
	
	//element access
	T& back();
	T& front();
	T& back() const;
	T& front() const;
	T& operator[] (size_type i);
	T& operator[] (size_type i) const ;
	private:
	std::shared_ptr<std::vector<T> > data;
	void check(size_type i , const std::string& msg) const;
	
	};

template <typename T>
void Blob<T>::check(size_type i, const std::string& msg) const
{
	if(i>= data->size())
	{
	throw std::out_of_range(msg);
	}
}
template <typename T>
Blob<T>::Blob():data(std::make_shared<std::vector<T>>()){}

template <typename T>
Blob<T>::Blob(std::initializer_list<T> i1):data(std::make_shared<std::vector<T>>(i1)){}

template <typename T>
void Blob<T>::pop_back()
{
	check(0, "pop_back on empty Blob");
	data->pop_back();
}

template <typename T>
T& Blob<T>::back()
{
	check(0, "back on empty Blob");
	return data->back();	
}

template <typename T>
T& Blob<T>::front()
{
	check(0, "back on empty Blob");
	return data->front();	
}


template <typename T>
T& Blob<T>::back() const
{
	check(0, "back on empty Blob");
	return data->back();	
}

template <typename T>
T& Blob<T>::front() const
{
	check(0, "back on empty Blob");
	return data->front();	
}

template <typename T>
T& Blob<T>::operator[] (size_type i)
{
	check(i, "subscript out of range");
	return (*data)[i];
	}

template <typename T>
T& Blob<T>::operator[] (size_type i) const
{
	check(i, "subscript out of range");
	return (*data)[i];
	}

#endif
