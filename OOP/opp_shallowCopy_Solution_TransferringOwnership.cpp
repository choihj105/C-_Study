// 3. 복사 금지
#include <iostream>
using namespace std;

template<typename T> class smartPtr
{
private:
	T* ptr;
public:
	smartPtr(T* _ptr = 0) : ptr(_ptr) {}
	~smartPtr() { delete ptr; }

	// copy construtor// no 'const'
	smartPtr(smartPtr& _smartptr) : ptr(_smartPtr.ptr)
	{	
		_smartptr.ptr = 0;
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