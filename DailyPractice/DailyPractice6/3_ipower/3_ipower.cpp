#include <iostream>
using namespace std;

int ipower(int n, int k);

int main()
{
	int num;
	cout << "input number: ";
	cin >> num;

	for (int i = 0; i <= 10; i++)
	{
		cout << num << "^" << i << " = " << ipower(num, i) << endl;
	}

	return 0;
}


int ipower(int n, int k)
{
	int temp = n;
	if (k == 0) { return 1; }
	else 
	{
		for (int i = 0; i < k - 1; i++)
		{
			n *= temp;
		}
	}
	return n;
}