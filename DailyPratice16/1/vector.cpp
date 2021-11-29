// STL : vector

#include <iostream>
using namespace std;

template<typename T> class VECTOR_iterator
{
	T* current;

private:
	VECTOR_iterator(T* p = 0) : current(p) {}
};



template<typename T> class VECTOR
{
private:
	T* mptr;
	int mSize;
	int mCapacity;
	int mIndex;

public:
	VECTOR(int s = 0) : mSize(s),
						mCapacity(s),
						mIndex(0)
	{
		mptr = new T[mCapacity];
	}

	int size() { return mSize; }
	int capacity() { return mCapacity;}

	void resize(int s)
	{
		if (s <= mCapacity) mSize = s;
		else
		{
			mCapacity = s * 2;
			mSize = s;
			T* temp = new T[mCapacity];
			memcpy(temp, mptr, sizeof(T) * mSize);
			delete[] mptr;
			mptr = temp;
		}

		
	}

	void push_back(const T& value)
	{
		if (mIndex == mSize)
			resize(mSize + 1);

		*(mptr + mIndex++) = value;
	}

	T& operator[] (int i)
	{
		return *(mptr + i);
	}


	typedef VECTOR_iterator<T> iterator;
	iterator begin() { return iterator(mptr) }
	iterator end() { return iterator(mptr + mSize); }


	void sort()
	{
		Sort();
	}
};


int main()
{
	VECTOR<int> v;

	v.push_back(10);
	v.push_back(20);

	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v[0] = 30;

	cout << v[0] << endl;
	cout << v[1] << endl;


	return 0;
}