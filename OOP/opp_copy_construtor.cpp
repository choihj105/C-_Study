//#include <iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int _x, int _y) : x(_x), y(_y) {
//		cout << "Start! x:" << x << " y: " << y << endl;
//	}
//
//	Point(const Point& p) : x(p.x), y(p.y) { cout << "Copy!" << endl; }
//
//	~Point() {
//		cout << "destroy" << endl; 
//		
//	}
//
//};
//
//int main()
//{
//	Point p1(1, 1);
//	Point p2(2, 2);
//	Point p3 = p1; 
//
//
//}
//
//// class copy시 얉은 복사문제가 생긴다.
//// 해결방안으로 깊은복사, 참조계수, 소유권 이전, 복사금지가있다.