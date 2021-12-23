///* return값을 class의 레퍼런스를 받아
// 이어쓸 수 있게 만드는 cool한 코드 */
//
//#include <iostream>
//using namespace std;
//
//class Calc {
//private:
//	int v;
//
//public:
//	Calc() : v(0) {}
//	Calc& add(int v) 
//	{ 
//		this->v += v; 
//		return *this;
//	}
//
//	void print()
//	{
//		cout << this->v << endl;
//	}
//};
//
//int main()
//{
//	Calc s;
//
//	s.add(5).add(5).add(5).add(5);
//	s.print();
//}
//
