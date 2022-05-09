#include <iostream>
using namespace std;

void insertSort(int nums[], int length) {

	for (int i = 1; i < length; i++) {

		int tmp = nums[i];
		int Idx = i - 1;

		while (Idx >= 0 && tmp < nums[Idx]) {
			nums[Idx + 1] = nums[Idx];
			Idx--;
		}
		nums[Idx + 1] = tmp;
	}
}