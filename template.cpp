/*
Template : It is used to generalize the function and class.

NOTE :
	1)In 'class template' use this syntax for creating obj.
		class_name<type> obj_name;
*/
#include<iostream>
using namespace std;

//template function
template <class T> void sum(T a, T b) //Now T will change according to the args.
{
	cout << a + b << "\n";
}

//template class
template <class P> class Point
{
	P x, y;
public:
	Point(P a, P b)
	{
		x = a;
		y = b;
	}
	void show()
	{
		cout << x << " " << y << "\n";
	}
};

int main()
{
	//template function usage
	sum(4, 5);  // int output
	sum(5.1, 7.6); // float output

	//template class usage
	Point<int> p1(1, 4);
	p1.show(); //int output

	Point<float> p2(3.4, 6.1);
	p2.show(); //float output

	return 0;
}

/*
-------OUTPUT-------
9
12.7
1 4
3.4 6.1
*/
