#include <iostream>
using namespace std;

void move(int n, char from, char to) {
	// n번 원판을 start에서 to로 옮긴다
	cout << n << "번 원판을 " << from << "에서 " << to << "로 옮긴다." << endl;
}

void Hanoi(int n, char start, char to, char via) {
	// n 개의 원판을 start에서 출발해서 via를 경유하여 to로 도착할 때 과정을 출력하라

	// 1. Hanoi(n-1)을 B로 옮김
	// 2. 가장 큰 n번째 판을 C로 옮김
	// 3. Hanoi(n-1)을 B에서 C로 옮김

	/*	ex) n == 3 일때
	* Hanoi(2, 'A', 'B', 'C')
	* 3번 원반을 C로 옮긴다 // if (n == 1) 바로 원판을 옮김
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