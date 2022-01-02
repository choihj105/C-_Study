#include <iostream>
using namespace std;

void move(int n, char from, char to) {
	// n�� ������ start���� to�� �ű��
	cout << n << "�� ������ " << from << "���� " << to << "�� �ű��." << endl;
}

void Hanoi(int n, char start, char to, char via) {
	// n ���� ������ start���� ����ؼ� via�� �����Ͽ� to�� ������ �� ������ ����϶�

	// 1. Hanoi(n-1)�� B�� �ű�
	// 2. ���� ū n��° ���� C�� �ű�
	// 3. Hanoi(n-1)�� B���� C�� �ű�

	/*	ex) n == 3 �϶�
	* Hanoi(2, 'A', 'B', 'C')
	* 3�� ������ C�� �ű�� // if (n == 1) �ٷ� ������ �ű�
	* Hanoi(2, 'B', 'C', 'A')
	*/
	if (n == 1) {  move(n, start, to);}
	else {
		Hanoi(n - 1, start, via, to);
		move(n, start, to);
		Hanoi(n - 1, via, to, start);
	}
}


int main()
{
	Hanoi(4, 'A', 'C', 'B');

	return 0;
}