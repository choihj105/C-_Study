// myPrint.cpp
#include "myPrint.h"

// ������

// namespace std�� ���� �ϰ� �ʹٸ� using namespace std; �������ָ� ��

std::ostream::ostream() :len(0) {}
void std::ostream::print(const char* str) { len += printf("%s ", str); }
void std::ostream::print(int i) { len += printf("%d ", i); }
void std::ostream::print(double d) { len += printf("%lf ", d); }


// namespace�� std�� ostream Ŭ���� ���۷����� ���ϰ����� �޴� operator overlording �Լ� ����
std::ostream& std::ostream::operator<<(const char* str) {
	print(str);
	return *this;
}
std::ostream& std::ostream::operator<<(int i) {
	print(i);
	return *this;
}
std::ostream& std::ostream::operator<<(double d) {
	print(d);
	return *this;
}
std::ostream& std::ostream::operator<<(ostream& (*f)(ostream&)) {
	return f(*this);
}

std::ostream& std::endl(ostream& m)
{
	printf("\n");
	return m;
}

std::ostream cout;