// Binary Search O(log n);
// Kick Point ** ���� ������ �Ǿ��־���մϴ�.

#include <iostream>
using namespace std;

int search(int nums[], int length, int target) {
	int left = 0;
	int right = length -1;
	while (left <= right) {
		int pivot = (left + right) / 2;

		// ã���� ��
		if (nums[pivot] == target) {
			return pivot;
		}

		// �˻� �� < target
		else if (nums[pivot] < target) {
			left = pivot + 1;
		}

		// �˻� �� > target
		else { // nums[pivot] > target
			right = pivot - 1;
		}
	}
	
	return -1;
}



int main() {

	int arr[] = { 1, 3, 5, 7, 8, 9, 11 };
	
	
	cout << search(arr, sizeof(arr)/sizeof(int), 3);
}