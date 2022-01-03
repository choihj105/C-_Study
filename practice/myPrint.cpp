#include "myPrint.h"

// ������
//std::myprint::myprint() :len(0) {}
void std::myprint::print(const char* str) { len += printf("%s ", str); }
void std::myprint::print(int i) { len += printf("%d ", i); }
void std::myprint::print(double d) { len += printf("%lf ", d); }

// namespace�� std�� myprint Ŭ���� ���۷����� ���ϰ����� �޴� operator overlording �Լ� ����
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