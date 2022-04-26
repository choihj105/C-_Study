#include <iostream>
using namespace std;

void mergeSorted(int nums1[], int n, int nums2[], int m) {
	int num1Idx = n - 1;
	int num2Idx = m - 1;
	int wIdx = n + m - 1;

	if (num2Idx < 0) return;

	while (0 <= num1Idx && 0 <= num2Idx) {
		
		int num1 = nums1[num1Idx];
		int num2 = nums2[num2Idx];

		if (num2 <= num1) {
			int num = num1;
			nums1[wIdx] = num;
			--wIdx;
			--num1Idx;
		}
		else {
			int num = num2;
			nums1[wIdx] = num;
			--wIdx;
			--num2Idx;
		}

	}

	while (0 <= num2Idx) {
		nums1[wIdx] = nums2[num2Idx];
		--wIdx;
		--num2Idx;
	}
}

int main() {
	int arr1[] = { 4, 5, 6, 0, 0, 0 };
	int arr2[] = { 1, 2, 3};

	mergeSorted(arr1, 3, arr2, 3);


	
	for (auto i : arr1) cout << i;
}