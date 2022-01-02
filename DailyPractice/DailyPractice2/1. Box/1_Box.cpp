#include <iostream>
using namespace std;

int main()
{
	unsigned short length, width, height = 0;

	cout << "Input length: ";
	cin >> length;
	cout << endl;

	cout << "Input width: ";
	cin >> width;
	cout << endl;

	cout << "Input height: ";
	cin >> height;
	cout << endl;

	cout << "Box volume : " << length * width * height;

	return 0;
}