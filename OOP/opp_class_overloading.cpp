// Operator Overloading (연산자 오버로딩)
#include <iostream>
using namespace std;

class NumPair
{
private:
	int x;
	int y;
public:
	NumPair(int _x, int _y) : x(_x), y(_y) {}

	void Print()
	{
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
	}

	void add(int a, int b)
	{
		x += a;
		y += b;
	}

	int getX() { return x; }
	int getY() { return y; }

	NumPair operator+(NumPair& n)
	{ return NumPair(x + n.getX(), y + n.getY());}

	//void operator++() // ++x3;
	void operator++(int) // x3++; 이런 느낌
	{
		x += 100;
		y += 100;
	}
};

int main()
{
	NumPair x1(10, 20);
	NumPair x2(20, 10);

	NumPair x3 = x1 + x2;
	x3.Print();



}