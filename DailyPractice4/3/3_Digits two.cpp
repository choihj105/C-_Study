#include <iostream>
using namespace std;

int main()
{
	int inputNum, thousands, hundreds, tens, ones = 0;

	cout << "Input your number : ";
	cin >> inputNum;

	thousands = inputNum / 1000;
	hundreds = (inputNum % 1000) / 100;
	tens = (inputNum % 100) / 10;
	ones = inputNum % 10;
	
	switch (thousands)
	{
	case 0: cout << "thousands : Zero" << endl; break;
	case 1: cout << "thousands : One" << endl; break;
	case 2: cout << "thousands : Two" << endl; break;
	case 3: cout << "thousands : Three" << endl; break;
	case 4: cout << "thousands : Four" << endl; break;
	case 5: cout << "thousands : Five" << endl; break;
	case 6: cout << "thousands : Six" << endl; break;
	case 7: cout << "thousands : Seven" << endl; break;
	case 8: cout << "thousands : Eight" << endl; break;
	case 9: cout << "thousands : Nine" << endl; break;
	default: break;
	}
	switch (hundreds)
	{
	case 0: cout << "hundreds : Zero" << endl; break;
	case 1: cout << "hundreds : One" << endl; break;
	case 2: cout << "hundreds : Two" << endl; break;
	case 3: cout << "hundreds : Three" << endl; break;
	case 4: cout << "hundreds : Four" << endl; break;
	case 5: cout << "hundreds : Five" << endl; break;
	case 6: cout << "hundreds : Six" << endl; break;
	case 7: cout << "hundreds : Seven" << endl; break;
	case 8: cout << "hundreds : Eight" << endl; break;
	case 9: cout << "hundreds : Nine" << endl; break;
	default: break;
	}
	switch (tens)
	{
	case 0: cout << "tens : Zero" << endl; break;
	case 1: cout << "tens : One" << endl; break;
	case 2: cout << "tens : Two" << endl; break;
	case 3: cout << "tens : Three" << endl; break;
	case 4: cout << "tens : Four" << endl; break;
	case 5: cout << "tens : Five" << endl; break;
	case 6: cout << "tens : Six" << endl; break;
	case 7: cout << "tens : Seven" << endl; break;
	case 8: cout << "tens : Eight" << endl; break;
	case 9: cout << "tens : Nine" << endl; break;
	default: break;
	}
	switch (ones)
	{
	case 0: cout << "ones : Zero" << endl; break;
	case 1: cout << "ones : One" << endl; break;
	case 2: cout << "ones : Two" << endl; break;
	case 3: cout << "ones : Three" << endl; break;
	case 4: cout << "ones : Four" << endl; break;
	case 5: cout << "ones : Five" << endl; break;
	case 6: cout << "ones : Six" << endl; break;
	case 7: cout << "ones : Seven" << endl; break;
	case 8: cout << "ones : Eight" << endl; break;
	case 9: cout << "ones : Nine" << endl; break;
	default: break;
	}

	return 0;
}