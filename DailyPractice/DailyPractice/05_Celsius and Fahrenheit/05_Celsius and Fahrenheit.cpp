#include <iostream>
using namespace std;

int main() {
	int celsius;
	float fahrenheit;

	cout << "Please enter a Celsius value: ";
	cin >> celsius;
	fahrenheit = 1.8 * celsius + 32.0;

	cout << endl << celsius << " " << "degrees Celsius is " << fahrenheit << " " << "degrees Fahrenheit.";
	return 0;
}