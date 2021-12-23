#include <iostream>
using namespace std;

int func(int a, int b)
{
	return a + b;
}

int main()
{

	int (*ptr)(int, int) = func;

	cout << ptr(5, 4) << endl;




	
}