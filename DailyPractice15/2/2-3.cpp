#include <iostream>
using namespace std;

// 1. static_cast
// 2. reinterpret_cast
// 3. const_cast

int main()
{

	double d = 3.14;
	int n = d; 
	cout << n << endl;


	int* p1 = (int*)malloc(100); // void* -> int*

	int* p2 = static_cast<int*>(malloc(100));

	int* p3 = (int*)&d;

	*p2 = 5;


	// int* p4 = static_cast<int*>(&d); // error!
	int* p5 = reinterpret_cast<int*>(&d); // ok!

	int n2 = 1234;
	//double* p6 = static_cast<double*> (&n2); // error!
	double* p7 = reinterpret_cast<double*> (&n2); // ok!
	*p7 = 1.1; // danger!

	const int* p8 = new int(10);
	cout << *p8 << endl;

	int* p9 = const_cast<int*>(p8);
	*p9 = 20;
	cout << *p8;
	  



	return 0;
}