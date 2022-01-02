#include <iostream>
using namespace std;

int main() {
	int age;

	cout << "당신의 나이는 몇 살 입니까? : ";
	cin >> age;

	cout << endl << "당신은 " << age * 12 << "개월 입니다.";
	return 0;
}