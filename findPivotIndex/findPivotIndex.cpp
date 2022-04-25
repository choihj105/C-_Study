// O(n)

#include <iostream>
using namespace std;
 
int findPivotIndex(int nums[], int length) {
	int leftSum(0);
	int rightSum(0);
	
	for (int i = 0; i < length; i++) {
		rightSum += nums[i];
	}

	int pastPivotNum = 0;
	for (int i = 0; i < length; i++) {
		int pivotNum = nums[i];
		leftSum += pastPivotNum;
		rightSum -= pivotNum;

		if (leftSum == rightSum) return i;
		pastPivotNum = pivotNum;
	}

	return -1;
}
