#include<iostream>
using namespace std;
class base
{

public:
void getdata(int a,char b) throw(int,char);		
};

class derived:public base
{
public:
	void get(int*p,int c) throw(int*,int);
};

void base::getdata(int a, char b) throw(int,char)
{
	if(a==9)
	   throw (5,'c');
	if(b=='d')
	throw(4,'f');   
}
void derived::get(int*p,int c) throw(int*,int)
{
	if(p==NULL)
	   throw (p,4);
	if(c==0)
	throw (p,c);  
}
int main()
{
	
	try
	{
		base b;
		b.getdata(9,'m');
	}
	catch(...)
	{
		cout<<"catch the function getdata in base class ";
	}
	
	
	try
	{
		derived d;
		d.get(NULL,0);
	}
	catch(...)
	{
		cout<<"catch the function get in derived class ";
	}
}
