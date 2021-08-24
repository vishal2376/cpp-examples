/*
Note :
	1)Keywords like 'try,catch,throw' don't need any header file
	2)Always put 'try' and 'catch' together.
	3)We can use multiple 'throw' & 'catch' for a single 'try' block

Tip :
	1)'throw' by value, 'catch' by const reference
*/
#include<iostream>
#include <string>
#include <stdexcept> // used to access defined exceptions
using namespace std;

int main()
{
	int a, b;
	a = 5;
	b = 0;
	// cin>>a>>b;

//catch custom excetions
	try
	{
		if (b == 0)
			throw 10; // int ,float ,string ,char etc can be used
		else
			cout << "a/b : " << a / b << "\n";

		if (b == -1)
			throw 'a'; //different throw
	}
	catch (int e) // data type depend on throw value
	{
		if (e == 10)
			cout << "Divide by Zero Error\n";
	}
	catch (char ch)
	{
		if (ch == 'a')
			cout << "New error due to 'a' :) \n";
	}


//catch pre-defined exceptions
	string s = "vishal"; //size = 6

	try {
		s.at(10); // trying to access 10th index of string
	}
	catch (const std::out_of_range& e)
	{
		cout << e.what();  // what() is used to get an explanatory message
	}

	return 0;
}

/*
--------OUTPUT--------
Divide by Zero Error
basic_string::at: __n (which is 10) >= this->size() (which is 6)
*/
