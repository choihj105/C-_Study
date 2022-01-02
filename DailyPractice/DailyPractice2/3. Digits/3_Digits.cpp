#include <iostream>
using namespace std;

int main()
{
	int number = 0;

	cout << "Input your number : ";
	cin >> number;
	
	cout << endl << "thousands : " << number / 1000;
	cout << endl << "hundreds : " << (number % 1000) / 100;
	cout << endl << "tens : " << (number % 100) / 10;
	cout << endl << "ones : " << number % 10;

	return 0;
}