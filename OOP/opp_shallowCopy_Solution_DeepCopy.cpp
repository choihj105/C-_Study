// 1. Deep Copy ±Ì¿∫ ∫πªÁ
#include <iostream>
using namespace std;

template<typename T> class smartPtr
{
private:
	T* ptr;
public:
	smartPtr(T *_ptr = 0): ptr(_ptr) {}
	~smartPtr() { delete ptr; }

	// copy construtor
	smartPtr(const smartPtr& _smartptr)  {
		ptr = new T;
		memcpy(ptr, _smartptr.ptr, sizeof(T)); // ±Ì¿∫∫πªÁ
	}

	T& operator*() { return *ptr; }
	T* operator->() { return ptr; }
};



int main()
{
	smartPtr<int> i1 = new int(10);
	smartPtr<int> i2 = i1;
	
	cout << *i1 << endl;
	cout << *i2 << endl;

	*i1 = 30;
	cout << *i1 << endl;
	cout << *i2 << endl;
}