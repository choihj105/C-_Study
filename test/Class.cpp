#include "Class.h"

// ������

// namespace std�� ���� �ϰ� �ʹٸ� using namespace std; �������ָ� ��

ostream::ostream() :len(0) {}
void ostream::print(const char* str) { len += printf("%s ", str); }
void ostream::print(int i) { len += printf("%d ", i); }
void ostream::print(double d) { len += printf("%lf ", d); }

// namespace�� std�� ostream Ŭ���� ���۷����� ���ϰ����� �޴� operator overlording �Լ� ����
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