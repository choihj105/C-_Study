#include <iostream>
#include <vector>
using namespace std;

void mergeSort(int nums[], int beginIdx, int lastIdx) { // O(nlgn)
	vector<int> tmp;

	if (beginIdx < lastIdx) {
		// Split
		int mid = (beginIdx + lastIdx)/2;
		mergeSort(nums, beginIdx, mid);
		mergeSort(nums, mid + 1, lastIdx);
		
		// Merge
		int left_side_size = mid - beginIdx + 1;
		int right_side_size = lastIdx - mid;

		int left_side_Idx = beginIdx;
		int right_side_Idx = beginIdx + left_side_size;

		while (left_side_Idx < beginIdx + left_side_size && right_side_Idx < lastIdx + 1) {
			if (nums[left_side_Idx] < nums[right_side_Idx]) {
				tmp.push_back(nums[left_side_Idx]);
				left_side_Idx++;
			}
			else {
				tmp.push_back(nums[right_side_Idx]);
				right_side_Idx++;
			}
		}

		while (right_side_Idx < lastIdx + 1) {
			tmp.push_back(nums[right_side_Idx++]);
		}
		while (left_side_Idx < beginIdx + left_side_size) {
			tmp.push_back(nums[left_side_Idx++]);
		}

		// 배열에 정렬된 값 넣어주기
		for (int i = 0; i < (left_side_size + right_side_size); i++) {
			nums[beginIdx + i] = tmp[i];
		}
	}
}

int main() {
	int nums[6] = { 0, 4, 2, 3, 7, 6 };
	mergeSort(nums, 0, 5);

	for (int i = 0; i < 6; i++) {
		cout << nums[i] << ' ';
	}

}