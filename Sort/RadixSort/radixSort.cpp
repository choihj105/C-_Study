#include <iostream>
#include <cmath>
using namespace std;

void countingSort(int nums[], int length, int radix) {
	int* SortedArr = new int[length];
	int* count = new int[10] {0, };
	int* acc_count = new int[10] {0, };
	
	int div = pow(10, radix);

	for (int i = 0; i < length; i++) {
		count[nums[i] / div % 10]++;
	}

	int tmp(0);
	for (int i = 0; i < 10; i++) {
		tmp += count[i];
		acc_count[i] = tmp;
		acc_count[i]--; // count ��� �������� �ε����� �ٲ��ֱ� ���ؼ�.
	}

	// stable �ϰ� �ϱ� ���ؼ� �������� ���ݴϴ�.
	for (int i = length - 1; i >= 0; i--) {
		int idx = acc_count[nums[i] / div % 10]--;
		SortedArr[idx] = nums[i];
	}

	// ������ arr�� �Ű��ݴϴ�.
	for (int i = 0; i < length; i++) {
		nums[i] = SortedArr[i];
	}
	delete[] count;
	delete[] acc_count;
	delete[] SortedArr;
}


void radixSort(int nums[], int length, int radix) {
	for (int i = 0; i < radix; i++) {
		countingSort(nums, length, i);
	}
}

int main() {
	int nums[7] = { 34, 43, 222, 13, 2, 5, 0};
	
	radixSort(nums, 7, 3);
	for (int i = 0; i < 7; i++) {
		cout << nums[i] << ' ';
	}
}