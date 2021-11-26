//#include <iostream>
//#include <memory>
//using namespace std;
//
//void foo(int* p) {
//	cout << "delete" << endl;
//	delete p;
//}
//
//
//int main()
//{
//	shared_ptr<int> p1(new int);
//	*p1 = 10;
//	cout << *p1 << endl;
//	cout << p1.use_count() << endl;
//	
//	shared_ptr<int> p2(p1);
//	cout << *p2 << endl;
//	cout << p2.use_count() << endl;
//
//	
//	shared_ptr<int> p3(new int, foo);
//	return 0;
//}