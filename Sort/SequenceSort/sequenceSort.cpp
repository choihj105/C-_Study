#include <iostream>
using namespace std;
// O(n^2) unstable


void sequenceSort(int nums[], int length) {
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			if (nums[i] > nums[j]) {  // Compare Á¶°Ç
				// Swap
				int tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
			}	
		}
	}
}

int main() {

	int nums[] = { -1, 3, 2, 1, 6 };
	sequenceSort(nums, 5);
	for (int i = 0; i < 5; i++) {
		cout << nums[i] << ' ';
	}
	
}