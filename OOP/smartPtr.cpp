//#include <iostream>
//using namespace std;
//
//template<typename T> class smartPtr {
//private:
//	T* ptr;
//public:
//	smartPtr( T *p = 0) : ptr(p){
//		cout << "constructor!" << endl;
//	}
//	~smartPtr() { 
//		cout << "deconstructor!" << endl;
//		delete ptr;
//	}
//
//	T& operator*() {
//		return *ptr;
//	}
//	
//	T* operator->() {
//		return ptr;
//	}
//};
//
//
//int main() 
//{
//	smartPtr<int> ptr = new int(4);
//	cout << *ptr << endl;
//
//	cout << sizeof(ptr)<<endl;
//}