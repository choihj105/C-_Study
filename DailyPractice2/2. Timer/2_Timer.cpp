#include <iostream>
using namespace std;

int main()
{
	int cur_second, days, hours, minutes, seconds = 0;

	cout << "Enter the number of seconds: ";
	cin >> cur_second;

	days = cur_second / 86400;
	hours = (cur_second / 3600) % 24;
	minutes = (cur_second / 60) % 60;
	seconds = cur_second % 60;

	cout << endl << cur_second << " " << "secondes = "
		<< days << " days, "
		<< hours << " hours, "
		<< minutes << " minutes, "
		<< seconds << " seconds";

	return 0;
}