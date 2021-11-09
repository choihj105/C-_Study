//1. Calculator with a class[Easy]
#include <iostream>
using namespace std;

class my_calc
{
private:
	float num1;
	float num2;

public:
	my_calc(float a, float b) : num1(a), num2(b) {}

	float add() { return num1 + num2; };
	float sub() { return num1 - num2; };
	float mul() { return num1 * num2; };
	float div() { 
		if (num2 == 0)
		{
			cout << "can't division from 0";
		}
		else {
			return num1 / num2;
		}
	};
};


int main() {
	my_calc c(10, 20);	

	cout << c.add() << endl;
	cout << c.sub() << endl;
	cout << c.mul() << endl;
	cout << c.div() << endl;
	return 0;
}