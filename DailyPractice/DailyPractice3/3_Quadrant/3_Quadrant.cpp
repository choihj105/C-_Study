#include <iostream>
using namespace std;

int main()
{
	float x;
	float y;
	int quadrant;

	cout << "Input x : ";
	cin >> x;
	cout <<"Input y : ";
	cin >> y;

	quadrant = ((x > 0) && (y > 0)) ? 1 : \
		((x < 0) && (y > 0)) ? 2 : \
		((x < 0) && (y < 0)) ? 3 : \
		((x > 0) && (y < 0)) ? 4 : 0;

	cout <<"It is located in the " << quadrant  << "st quadrant.";

	return 0;
}