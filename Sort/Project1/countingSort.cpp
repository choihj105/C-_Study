#include <iostream>
using namespace std;
// O(n + k)

void countingSort(int nums[], int length, int size) {
	int* SortedArr = new int[length];
	int* count = new int[size] {0,};
	int* acc_count = new int[size] {0,};

	for (int i = 0; i < length; i++) {
		count[nums[i]]++;
	}

	int tmp(0);
	for (int i = 0; i < size; i++) {
		tmp += count[i];
		acc_count[i] = tmp;
		acc_count[i]--; // count ��� �������� �ε����� �ٲ��ֱ� ���ؼ�.
	}

	// stable �ϰ� �ϱ� ���ؼ� �������� ���ݴϴ�.
	for (int i = length - 1; i >= 0; i--) {
		SortedArr[i] = acc_count[nums[i]]--;
	}

	// ������ arr�� �Ű��ݴϴ�.
	for (int i = 0; i < length; i++) {
		nums[i] = SortedArr[i];
	}
	
	delete[] count;
	delete[] acc_count;
	delete[] SortedArr;
}


int main() {
	int nums[7] = { 3, 4, 0, 1, 2, 5, 0 };
	countingSort(nums, 7, 6);

	for (int i = 0; i < 7; i++) {
		cout << nums[i] << ' ';
	}
}