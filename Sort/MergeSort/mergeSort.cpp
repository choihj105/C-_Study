#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int>& nums, int left, int right) { // O(nlgn)
	
	
	if (left < right) {

		// Split
		int mid = (left+right)/2;
		mergeSort(nums, left, mid);
		mergeSort(nums, mid + 1, right);
		

		// Merge
		int left_side_size = mid - left + 1;
		int right_side_size = right - mid;
	}
	



}