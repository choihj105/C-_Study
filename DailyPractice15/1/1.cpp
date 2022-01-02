// shallow copy �����ϴ� smart pointer �����

// 1, Deep Copy

#include <iostream>
using namespace std;

template <typename T>
class smartptr
{
private:
	T* ptr;
	int* ref;

public:
	smartptr(T *p = 0): ptr(p){
	
		ref = new int(1);
		(*ref)++;
	}

	~smartptr() 
	{
		if (--(*ref) == 0)
		{
			delete ptr;
			delete ref;
		}

	}

	// 2. ���۷���
	smartptr(const smartptr& p)
		: ptr(p.ptr), ref(p.ref)
	{
		(*ref)++;
	}


	

	T& operator*() { return *ptr; }
	T* operator->() { return ptr; }


	// 1. ���� ����
	/*smartptr(const smartptr& p)
	{
		ptr = new t;
		memcpy(ptr, p.ptr, sizeof(t));
	}*/

};

int main()
{

	smartptr<int> p1 = new int;
	*p1 = 10;

	smartptr<int> p2 = p1;

	cout << *p2 << endl;
	
	*p2 = 5;

	cout << *p1 << endl;

	return 0;
}