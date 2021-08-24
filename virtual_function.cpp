/*
First read 'function_overriding.cpp'

Virtual function : A function which can do function overriding during runtime through late binding

Note :
	1)virtual function do late binding.
	2)Late binding done in simple steps during runtime:
		a)compiler make a pointer(v_ptr) inside private of class
	    b)v_ptr store address of a vtable(store functions).
	    c)Now vtable functions are compared and then binded with class.
	3)virtual function should be declared in parent class
*/

#include<iostream>
using namespace std;

class A
{
public:
	virtual void show() //remove 'virtual' to  see importance
	{
		cout << "A class\n";
	}
};

class B : public A
{
public:
	void show()
	{
		cout << "B class\n";
	}
};

int main()
{

	A *p;
	B o1;

	p = &o1;

	p->show(); // B class

	//remove 'virtual' from A class and see difference
}

/*
--------OUTPUT---------
B class
*/
