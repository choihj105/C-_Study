#include <iostream>
using namespace std;
int Factor(int n);

int main() {

	// i!/ i!(i - j)!
	int height;
	cout << "input height: ";
	cin >> height;



	for (int i = 0; i < height; i++)
	{

		for (int k = 0; k < height - (i + 1); k++) { cout << " "; }

		cout << 1;

		for (int j = 1; j <= i; j++) {

			cout << " " << (Factor(i) / (Factor(j) * (Factor(i - j))));
			
		}
		cout << endl;
	}
	return 0;
}

int Factor(int n) {

	int temp = 1;
	if (n == 0) { return 1; }
	else { for (int i = 1; i <= n; i++) { temp *= i; } }
	return temp;
}