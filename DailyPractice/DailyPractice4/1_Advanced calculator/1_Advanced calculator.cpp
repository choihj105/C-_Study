#include <iostream>
using namespace std;

int main()
{
	char oper;
	int num1;
	int num2;
	float resultValue = 0;

	cout << "Select an operator: ";
	cin >> oper;

	cout << "Input two number: ";
	cin >> num1 >> num2;
	

	if (oper == '+')
	{
		resultValue = num1 + num2;
	}
	else if(oper == '-')
	{
		resultValue = num1 - num2;
	}
	else if (oper == '*')
	{
		resultValue = num1 * num2;
	}
	else if (oper == '/')
	{
		if (num2 == 0)
		{
			cout << "the value is divided by zero";
			return 0;
		}
		else
		{
			resultValue = num1 / num2;
		}
	}
	else if (oper == 'Q' || oper == 'q')
	{
		return 0;
	}
	else { cout << "retry this program"; }

	cout << "Answer: " << resultValue;


	return 0;
}