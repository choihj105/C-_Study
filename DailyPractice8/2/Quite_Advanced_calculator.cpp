#include <iostream>
using namespace std;

int main()
{
	int matrixes1[3][3];
	int matrixes2[3][3];
	int temp;
	char op;

	cout << "----------" << "\n\n";
	cout << "+ : addition" << "\n\n";
	cout << "* : multiplication" << "\n\n";
	cout << "----------" << "\n\n";
	cout << "Select an operator: ";
	cin >> op;

	cout << "input matrix1: ";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) 
		{
			cin >> matrixes1[i][j];
		}
	}

	cout << "input matrix2: ";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) 
		{
			cin >> matrixes2[i][j];
		}
	}

	cout << "Answer: \n";
	if (op == '+')
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << matrixes1[i][j] + matrixes2[i][j] << " ";
			}
			cout << "\n";
		}
	}
	else if (op == '*')
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				temp = 0;
				for (int k = 0; k < 3; k++)
				{
					temp += (matrixes1[i][k] * matrixes2[k][j]);
				}
				cout << temp << " ";
			}
			cout << "\n";
		}
	}


	


	return 0;
}