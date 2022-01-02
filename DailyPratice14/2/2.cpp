// smartptr
#include <iostream>
using namespace std;


template <typename T>
class smartptr
{
private:
	int* ptr;
public:
	smartptr(T* p = 0) : ptr(p)
	{
		cout << "constructor! " << endl;

	}
	~smartptr()
	{
		cout << "FREE!!" << endl;
		delete ptr;
	}
	T& operator* ()
	{
		return *ptr;
	}


};


int main()
{
	smartptr<double> ptr = new double;

	return 0;
}