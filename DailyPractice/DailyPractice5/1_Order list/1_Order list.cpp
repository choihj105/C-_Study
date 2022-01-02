#include <iostream>
using namespace std;

int main() {
	int userSelect = 0, burgerNum = 0, friesNum = 0, cokeNum = 0;

	while (userSelect != 4)
	{
		cout << "select a menu (1-4)" << endl
			<< "1) Bugger, 2) Fries, 3) Coke, 4) finish" << endl;
		cin >> userSelect;
		if (userSelect == 1)
		{
			cout << "You've ordered a Bugger" << endl;
			burgerNum++;
		}
		else if (userSelect == 2)
		{
			cout << "You've ordered Fries" << endl;
			friesNum++;
		}
		else if (userSelect == 3)
		{
			cout << "You've ordered a Coke" << endl;
			cokeNum++;
		}
		else if (userSelect == 4)
		{
			cout << "Your order has been received!" << endl;
		}	
	}
	
	cout << endl << "Your order" << endl;
	if (burgerNum != 0) { cout << "1) Bugger * " << burgerNum << endl; }
	if (friesNum != 0) { cout << "2) Fries * " << friesNum << endl; }
	if (cokeNum != 0) { cout << "3) Coke * " << cokeNum << endl; }
	return 0;
}