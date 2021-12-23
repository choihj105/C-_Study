// 4 . 복사 금지
#include <iostream>
using namespace std;

template<typename T> class smartPtr
{
private:
	T* ptr;
	smartPtr(const smartPtr&);
	void operator=(const smartPtr&);
public:
	smartPtr(T* _ptr = 0) : ptr(_ptr) {}
	~smartPtr() { delete ptr; }

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