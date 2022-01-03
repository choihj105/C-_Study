#include "myPrint.h"

// 구현부
//std::myprint::myprint() :len(0) {}
void std::myprint::print(const char* str) { len += printf("%s ", str); }
void std::myprint::print(int i) { len += printf("%d ", i); }
void std::myprint::print(double d) { len += printf("%lf ", d); }

// namespace인 std의 myprint 클래스 레퍼런스를 리턴값으로 받는 operator overlording 함수 구현
std::myprint& std::myprint::operator<<(const char* str) {
	print(str);
	return *this;
}
std::myprint& std::myprint::operator<<(int i) {
	print(i);
	return *this;
}
std::myprint& std::myprint::operator<<(double d) {
	print(d);
	return *this;
}
std::myprint& std::myprint::operator<<(myprint& (*f)(myprint&)) {
	return f(*this);
}

std::myprint& endl(std::myprint& m)
{
	printf("\n");
	return m;
}