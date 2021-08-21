/*
Abstract Class : A class which contains atleast one 'pure virtual function'

NOTE :
	1)Pure virtual functions are empty(means no defination)
	2)We can't create object of Abstract class.
	3)In order to use its data, we inherit this class to a child class.
	4)Pure virtual function must be defined in Child class.
*/
#include<iostream>
using namespace std;

//Abstact class
class A
{
public:
	virtual void sayBye() = 0; // Pure virtual function
	void sayHello()
	{
		cout << "Hello\n";
	}

};

//Child class
class B: public A
{
public:
	void sum(int a, int b)
	{
		cout << "Sum : " << a + b << "\n";
	}

	//Defining 'pure virtual function' is compulsory here.
	void sayBye()
	{
		cout << "Bye\n";
	}
};

int main()
{
	// A obj1; // gives error,can't create object

	B obj; // can access A class functions through B class object

	obj.sayHello();  //from A class
	obj.sum(2, 3);	 //from B class
	obj.sayBye();	 //from A class

	return 0;
}

/*
-------OUTPUT---------
Hello
Sum : 5
Bye
*/

