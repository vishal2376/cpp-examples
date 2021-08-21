/*
Operator Overloading : To use operators with our defined types (class,structure,union,etc).
It makes easy to perform operation on our defined types.

NOTE:
	1)All c++ legal operators can be oveloaded.
	2)To make difference between increment/decrement use 'int' in args.
	3)We can also overload these brackets (),[].
*/
#include<iostream>
using namespace std;

class Point
{
	int x, y; //cordinate points
public:
	void setValue(int a, int b)
	{
		x = a;
		y = b;
	}
	void show()
	{
		cout << x << " " << y << "\n";
	}

	// Let Point has two objects p1 and p2 and see its usage
	Point operator+(Point p) // p1 + p2  sum [same for - minus]
	{
		Point temp;
		temp.x = x + p.x;
		temp.y = y + p.y;
		return temp;
	}
	Point operator-()       // -p1      change sign of p1
	{
		Point temp;
		temp.x = -x;
		temp.y = -y;
		return temp;
	}

	Point operator++() //    ++p1	pre-increament
	{
		Point temp;
		temp.x = ++x;
		temp.y = ++y;
		return temp;
	}

	Point operator++(int) // p1++ 	post-increament ('int' is used to make differnce between increment)
	{
		Point temp;
		temp.x = x++;
		temp.y = y++;
		return temp;
	}
	//do same as for - , * , / ,etc..
};

int main()
{
	Point p1, p2, p3;

	p1.setValue(1, 2);
	p2.setValue(3, 4);

	p3 = p1 + p2; // same as "p3 = p1.operator+(p2);"
	p3.show();

	p3 = -p1; // same as "p3 = p1.operator-();"
	p3.show();

	p3 = p1++; // same as "p3 = p1.operator+(int);"
	p3.show();

	p3 = ++p1; // same as "p3 = p1.operator+();"
	p3.show();


	return 0;
}
/*
--------OUTPUT---------
4 6
-1 -2
1 2
3 4
*/