/*
Static memebers and functions 
Note ->  Static members can be acess by any function ( member or friend )
         They should be intilized outside the class also with scope resolution operator.

static function can only acess the static variables of that class.
Note: static function are directly called by the class name with the scope resolution operator
 
Inline Functions
This is the request to the compiler not a command it means that if function is short and have less complexity then the compiler accept it as the inline function otherwiseit will rejected by the compiler and treated as the normal fumction by the compiler.
*/

#include<iostream>
using namespace std;

class abc
{
static int new1;
	int a = 0;
	public :
		
		void staticfunction()
		{
			new1++;
		}
		void print()
		{
			cout<<new1;
		}
		abc()
	{
		new1++;
	}
	
	static int view_static()
	{
		return new1;
	}
	

};
int abc::new1;
	inline void nice()
	{
		cout<<"hello";
	}
int main()
{
	abc obj1,obj2,obj3;
	obj1.staticfunction();
	obj2.staticfunction();
	obj3.staticfunction();
//	obj3.print();
	cout<<abc::view_static();
	
	nice();
	return 0;
	
	
}
