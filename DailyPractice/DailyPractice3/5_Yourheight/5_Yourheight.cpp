#include <iostream>
using namespace std;

int main()
{
	int height;
	int feet;
	float inch;

	cout << "Input your height : ";
	cin >> height;
	
	inch = height / 2.54;
	feet = inch / 12;

	cout << height << "cm is " << feet << " feet " << inch - (feet * 12) << " inch.";
	return 0;
}