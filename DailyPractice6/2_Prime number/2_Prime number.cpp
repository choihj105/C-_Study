#include <iostream>
using namespace std;

bool checkPrimeNum(int n);

int main()
{
	int usernum;
	bool check;

	while (true)
	{
		cout << "input number: ";
		cin >> usernum;
		check = checkPrimeNum(usernum);

		if (check) { cout << usernum << " is a prime number.\n"; }
		else if (usernum == -1) { cout << "Done."; break; }
		else { cout << usernum << " is not a prime number.\n"; }

	}
	return 0;
}

bool checkPrimeNum(int n)
{	
	if (n < 0) { return false; }
	// ��Ʈ n�� ��쿡 ������� ���� �߰����̶�� ���� �̿��Ͽ� �Ҽ��� �Ǻ��Ѵ�
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) { return false; }
	}
	return true;
}