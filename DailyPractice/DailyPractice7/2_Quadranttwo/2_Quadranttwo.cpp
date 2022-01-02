#include <iostream>
#include <cmath>

using namespace std;

double dist_2d(double x1, double y1, double x2, double y2);

int main()
{
	double x1, y1, x2, y2;
	cout << "Input x1 y1: ";
	cin >> x1 >> y1;
	cout << "Input x2 y2: ";
	cin >> x2 >> y2;
	cout << "Distance: " << dist_2d(x1, y1, x2, y2);

	return 0;
}

double dist_2d(double x1, double y1, double x2, double y2) {
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}