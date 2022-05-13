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
		acc_count[i]--; // count 라는 개수에서 인덱스로 바꿔주기 위해서.
	}

	// stable 하게 하기 위해서 역순으로 해줍니다.
	for (int i = length - 1; i >= 0; i--) {
		SortedArr[i] = acc_count[nums[i]]--;
	}

	// 정리된 arr를 옮겨줍니다.
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