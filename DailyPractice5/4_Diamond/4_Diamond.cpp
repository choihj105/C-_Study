#include <iostream>
using namespace std;

int main() {

	int height = 0;
	char shape = 'o';
	cout << "input height: ";
	cin >> height;
	
	for (int i = 1; i <= height; i++)
	{
		if (i <= height / 2) // 다이아몬드 윗 부분
		{
			for (int m = 0; m < (height - (2 * i - 1)) / 2; m++) { cout << " "; }
			for (int n = 0; n < 2 * i - 1; n++) { cout << shape; }
			cout << endl;
		}
		else				 // 다이아몬드 아랫 부분
		{
			for (int p = 0; p < (height - (2 * (height - i) + 1)) / 2; p++) { cout << " "; }
			for (int n = 0; n < 2 * (height - i) + 1; n++) { cout << shape; }
			cout << endl;
		}
	}
	return 0;
}