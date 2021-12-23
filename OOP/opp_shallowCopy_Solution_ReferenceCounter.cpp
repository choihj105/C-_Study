// opp_shallowCopy_Solution_ReferenceCounter 2. 참조계수
#include <iostream>
using namespace std;

template<typename T> class smartPtr
{
private:
	T* ptr;
	int* ref;
public:
	smartPtr(T* _ptr = 0) : ptr(_ptr) {
		ref = new int(1);
	}
	~smartPtr() { 
		if (--(*ref) == 0) {
			delete ptr;
			delete ref;
		}
	}

	// copy construtor
	smartPtr(const smartPtr& _smartptr): ptr(_smartPtr.ptr), ref(p.ref) {	
		(*ref)++;
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