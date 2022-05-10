#include <iostream>
#include <cstdlib>
using namespace std;


int RangeRandom(int range_min, int range_max) {

	int u = (double)rand() / (RAND_MAX + 1) * (range_max - range_min) + range_min;
	return u;
}

void quickSort(int nums[], int beginIdx, int lastIdx) {

	int length = lastIdx - beginIdx + 1;
	if (length <= 1) return;

	int pivot = RangeRandom(beginIdx, lastIdx+1); // random left ~ (right-1)
	
	// pivot 오른쪽 끝으로 옮기기
	int t = nums[lastIdx];
	nums[lastIdx] = nums[pivot];
	nums[pivot] = t;

	int leftIdx = beginIdx;
	int rightIdx = lastIdx - 1;
	
	while (leftIdx <= rightIdx) {
		if (nums[leftIdx] < nums[lastIdx]) {
			leftIdx++;
			continue;
		}
		if (nums[rightIdx] > nums[lastIdx]) {
			rightIdx--;
			continue;
		}

		// swap, 자리 바꿔주기
		if (nums[lastIdx] < nums[leftIdx] && nums[lastIdx] > nums[rightIdx]) {
			int tmp = nums[leftIdx];
			nums[leftIdx] = nums[rightIdx];
			nums[rightIdx] = tmp;
			continue;
		}
	}
	// 자리 바꾸기가 끝난 후
	int tmp = nums[lastIdx];
	nums[lastIdx] = nums[leftIdx];
	nums[leftIdx] = tmp;

	quickSort(nums, leftIdx + 1, lastIdx);
	quickSort(nums, beginIdx, leftIdx - 1);

	return;
	
}

int main() {
	int nums[] = {1, 6, 7, 10, 22, 5, 16};

	quickSort(nums, 0, 6);

	for (int i = 0; i < 7; i++) {
		cout << nums[i] << ' ';
	}

}