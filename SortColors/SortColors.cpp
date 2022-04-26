#include <iostream>
using namespace std;


// 1. Counting O(n)
void SortColors(int nums[], int length) {

	int zero(0), one(0), two(0);
	
	for (int i = 0; i < length; i++)
	{
		switch (nums[i])
		{
		case 0:
			zero++;
			break;
		case 1:
			one++;
			break;
		case 2:
			two++;
			break;
		}
	}
	
	for (int i = 0; i < length; i++)
	{
		if (i < zero) nums[i] = 0;
		else if (i < zero + one) nums[i] = 1;
		else nums[i] = 2;
	}
}


// 2. inplace-swap
void SortColors(int nums[], int length) {
	int begin(0);
	int end(length - 1);
	int pivot(0);
	while (pivot <= end) {
		if (nums[pivot] == 0) {
			swap(nums[begin], nums[pivot]);
			pivot++;
			begin++;
		}
		else if (nums[pivot] == 2) {
			swap(nums[end], nums[pivot]);
			end--;
		}
		else
			pivot++;
	}
}


int main() {
	int arr[] = { 1, 2, 0, 0, 2, 1, 2 };
	SortColors(arr, 7);
	for(auto i : arr) cout << i;
}