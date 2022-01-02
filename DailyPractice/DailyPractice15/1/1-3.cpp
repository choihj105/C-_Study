// 3. Transferring Ownership (소유권 이전)

#include <iostream>
using namespace std;

template <typename t>
class smartptr
{
private:
	t* ptr;

public:
	smartptr(t* p = 0) : ptr(p) {
	}

	~smartptr()
	{
		delete ptr;
	}
	
	smartptr(smartptr& p) : ptr(p.ptr) {
		p.ptr = 0;
	}

	t& operator*() { return *ptr; }
	t* operator->() { return ptr; }


};

int main()
{

	smartptr<int> p1(new int);
	*p1 = 10;

	smartptr<int> p2(p1);

	cout << *p2 << endl;

	*p2 = 5;

	cout << *p1 << endl;

	return 0;
}

