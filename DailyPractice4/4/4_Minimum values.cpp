#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3, minimumNum;
	
	cout << "input numbers : ";
	cin >> num1 >> num2 >> num3;

	if ((num1 <= num2) && (num1 <= num3)) 
	{
		minimumNum = num1;
	}
	else if ((num2 <= num1) && (num2 <= num3))
	{
		minimumNum = num2;
	}
	else
	{
		minimumNum = num3;
	}
	
	cout << "minimum number : " << minimumNum;

	return 0;
}