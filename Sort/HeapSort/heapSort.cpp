#include <iostream>
using namespace std;

void swap(int nums[], int length, int rootIdx) {
	int largeIdx = rootIdx;
	int leftChild = 2 * rootIdx + 1;
	int rightChild = 2 * rootIdx + 2;

	if (leftChild < length && nums[leftChild] > nums[largeIdx])
		largeIdx = leftChild;

	if (rightChild < length && nums[rightChild] > nums[largeIdx]) 
		largeIdx = rightChild;
	
	if (largeIdx != rootIdx) {
		int tmp = nums[largeIdx];
		nums[largeIdx] = nums[rootIdx];
		nums[rootIdx] = tmp;
		
		// recursive
		swap(nums, length, largeIdx);
	}
}

void heapify(int nums[], int length) { // make_heap
	for (int i = (length - 1)/ 2; i >= 0; i--) {
		swap(nums, length, i);
	}
}

void heapSort(int nums[], int sorted[], int length) {
	heapify(nums, length);

	for (int i = length-1; i >=0 ; i--) {
		
		// 끝 번호와 바꿔주기
		
		sorted[i] = nums[0];
		nums[0] = nums[i];
		heapify(nums, i);
	}
}

int main() {

	int nums[7] = { 4, 6, 3, 2, 7, 9, 1 };
	int sorted[7];

	heapSort(nums , sorted, 7);

	for (int i = 0; i < 7; i++) {
		cout << sorted[i] << ' ';
	}

}