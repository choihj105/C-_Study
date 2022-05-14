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
		acc_count[i]--; // count 라는 개수에서 인덱스로 바꿔주기 위해서.
	}

	// stable 하게 하기 위해서 역순으로 해줍니다.
	for (int i = length - 1; i >= 0; i--) {
		int idx = acc_count[nums[i] / div % 10]--;
		SortedArr[idx] = nums[i];
	}

	// 정리된 arr를 옮겨줍니다.
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