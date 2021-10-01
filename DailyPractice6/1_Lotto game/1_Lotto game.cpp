#include <iostream>
#include <random>
using namespace std;

int lotto(int a, int b, int c, int d, int e, int f);
int duplicationCheck(int n, int m);

int main() 
{
	int a, b, c, d, e, f;
	cout << "1~45 ������ ���� 6���� �ߺ����� ������" << endl;
	cin >> a >> b >> c >> d >> e >> f;
	int times = lotto(a, b, c, d, e, f);
	
	for (int j = 0; j < 6; j++) {
		if (times == j) { cout << "�ζǹ�ȣ�� " << j << "�� �¾ҽ��ϴ�.!! \n"; break;}
	}
	

	return 0;
}

int lotto(int a, int b, int c, int d, int e, int f)
{
	random_device rd;
	mt19937 gen(rd());

	int A[6] = {0, 0, 0, 0, 0, 0};
	int i = 0;
	
	A[0] = gen() % 45 + 1;
	A[1] = duplicationCheck(gen() % 45 + 1, A[0]);
	A[2] = duplicationCheck(gen() % 45 + 1, A[0]);
	A[2] = duplicationCheck(A[2], A[1]);
	A[3] = duplicationCheck(gen() % 45 + 1, A[0]);
	A[3] = duplicationCheck(A[3], A[1]);
	A[3] = duplicationCheck(A[3], A[2]);
	A[4] = duplicationCheck(gen() % 45 + 1, A[0]);
	A[4] = duplicationCheck(A[4], A[1]);
	A[4] = duplicationCheck(A[4], A[2]);
	A[4] = duplicationCheck(A[4], A[3]);
	A[5] = duplicationCheck(gen() % 45 + 1, A[0]);
	A[5] = duplicationCheck(A[5], A[1]);
	A[5] = duplicationCheck(A[5], A[2]);
	A[5] = duplicationCheck(A[5], A[3]);
	A[5] = duplicationCheck(A[5], A[4]);

	for (int k = 0; k < 6; k++)
	{
		if (A[k] == a) { i++;}
		if (A[k] == b) { i++;}
		if (A[k] == c) { i++;}
		if (A[k] == d) { i++;}
		if (A[k] == e) { i++;}
		if (A[k] == f) { i++;}
	}
	cout << "�̹�ȸ ��÷��ȣ�� " << A[0] << " " << A[1] << " " << A[2] << " " \
		<< A[3] << " " << A[4] << " " << A[5] << "�Դϴ�.\n";

	return i;
}

int duplicationCheck(int n, int m) {
	random_device rd;
	mt19937 gen(rd());

	if (n != m) {
		return n;
	}
	else
		n = gen() % 45 + 1;
		duplicationCheck(n, m);
		return n;
}

