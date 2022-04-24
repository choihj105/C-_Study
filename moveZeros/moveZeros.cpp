#include <iostream>
using namespace std;

void moveZeros(int nums[], int size) {
	
	int wIdx = 0;
	for (int idx = 0; idx < size; idx++) {
		if (nums[idx] != 0) {
			swap(nums[wIdx], nums[idx]);
			wIdx++; 
		}

	}
}