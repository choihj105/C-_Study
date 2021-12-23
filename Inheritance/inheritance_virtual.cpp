//#include <iostream>
//using namespace std;
//
//class A {
//public:
//	virtual void cry(int a = 10) = 0;
//};
//
//class B : public A{
//public:
//	void cry(int b = 20) {
//		cout << "B: " << b << endl;
//	}
//};
//
//
//void foo(A* a) {
//	a ->cry();
//}
//
//int main()
//{
//	B* a = new B;
//	//B* b = new A;
//
//	
//	
//	a->cry();
//	//b->cry();
//	
//	foo(a);
//	//foo(b);
//
//}