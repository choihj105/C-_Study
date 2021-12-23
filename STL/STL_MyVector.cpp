#include <iostream>
using namespace std;

template<typename T> class VECTOR_iterator {
	T* current;
public:
	VECTOR_iterator(T* p = 0) : current(p) {}

	T& operator*() { return *current; }
	bool operator==(VECTOR_iterator& v) { return current == v.current; }
	bool operator!=(VECTOR_iterator& v) { return current != v.current; }

	VECTOR_iterator& operator++() { ++current; return *this; }
	VECTOR_iterator& operator++(int) { current++; return *this; }
};

template<typename T> class VECTOR {
private:
	T* mPtr;
	int mSize;
	int mCapacity;
	int mIndex;

public:
	VECTOR(int s = 0): mSize(s), mCapacity(s), mIndex(0) {
		mPtr = new T[mCapacity];
	}
	int size() { return mSize; }
	int capacity() { return mCapacity; }

	void resize(int s) {
		if (s <= mCapacity) mSize = s;
		else {
			mCapacity = s * 2;
			mSize = s;

			T* temp = new T[mCapacity];
			memcpy(temp, mPtr, sizeof(T) * mSize);
			delete[] mPtr;
			mPtr = temp;
		}
	
	}

	void push_back(const T& value) {
		if (mIndex == mSize) resize(mSize + 1);

		mPtr[mIndex++] = value;

	}


	typedef VECTOR_iterator<T> iterator;
	iterator begin() { return iterator(mPtr); }
	iterator end() { return iterator(mPtr + mSize); }

};


int main() 
{
	VECTOR<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

}