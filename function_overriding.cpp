/*
Function Overloading : funtion_name,return_type are same but args_type are different
	void sum(int,int);
	void sum(float,float);

Function Hiding      : funtion_name,return_type are same , args are different.
	void show();
	void show(int);

Function Overriding  : funtion_name,return_type,args all are same but different function_defination
	void start(){....}
	void start(){diffrent defination}

Note :
	1)All these are done by compiler (process called Early Binding).
*/
#include<iostream>
using namespace std;

class A
{
public:
	void func1()
	{
		cout << "Function 1 of A class\n";
	}
	void func2()
	{
		cout << "Function 2 of A class\n";
	}
	void func3()
	{
		cout << "Function 3 of A class\n";
	}
};

class B : public A
{
public:
	int func1()  // function overloading
	{
		cout << "Function 1 of B class\n";
		return 2;
	}
	void func2(int a) // function hiding , now can't access 'func2()' through B class
	{
		cout << "Function 2 of B class\n";
	}
	void func3()	//function overriding , Now compiler run func3() of B class , not A class
	{
		cout << "Function 3 of B class\n";
	}
};

int main()
{
	B o1; //remember B class also inherits A class

	o1.func1(); // B class
	//o1.func2(); //present in A class but still show error because of hiding
	o1.func3(); // B class


//There are some limitations in function overriding with pointers
	A *p;
	B o2;

	p = &o2;

	p->func1(); // A class
	p->func2(); // A class
	p->func3(); // A class

//This problem can be resovled by using virtual function

	return 0;
}
/*
--------OUTPUT---------
Function 1 of B class
Function 3 of B class
Function 1 of A class
Function 2 of A class
Function 3 of A class
*/