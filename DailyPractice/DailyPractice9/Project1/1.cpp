// 1. Touring the 2D array with a pointer [Easy]
#include <iostream>
using namespace std;

int main()
{
	int arr[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
	int* ptr = &arr[0][0];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
		{
			cout << *(ptr + j + 3 * i) << " ";
		}
		cout << endl;
	}

	return 0;
}
