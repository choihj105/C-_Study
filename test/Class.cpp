#include "Class.h"

// 구현부

// namespace std를 생략 하고 싶다면 using namespace std; 선언해주면 됨

ostream::ostream() :len(0) {}
void ostream::print(const char* str) { len += printf("%s ", str); }
void ostream::print(int i) { len += printf("%d ", i); }
void ostream::print(double d) { len += printf("%lf ", d); }

// namespace인 std의 ostream 클래스 레퍼런스를 리턴값으로 받는 operator overlording 함수 구현
ostream& ostream::operator<<(const char* str) {
	print(str);
	return *this;
}
ostream& ostream::operator<<(int i) {
	print(i);
	return *this;
}
ostream& ostream::operator<<(double d) {
	print(d);
	return *this;
}
ostream& ostream::operator<<(ostream& (*f)(ostream&)) {
	return f(*this);
}

ostream& endl(ostream& m)
{
	printf("\n");
	return m;
}