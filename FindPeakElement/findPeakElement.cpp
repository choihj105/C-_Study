#include <iostream>
using namespace std;

// peak index return
int findPeakElement(int nums[], int length )
{
	int left(0);
	int right(length - 1);

	if (length <= 1) {
		return 0;
	}


	while (left < right) 
	{
		int pivot = (left + right) / 2;
		int num = nums[pivot];
		int nextNum = nums[pivot + 1];

		if (num < nextNum) {
			left = pivot + 1;
		}
		else {
			right = pivot;
		}
	}

	return left;
}