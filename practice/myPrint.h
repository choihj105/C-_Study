// ��� �ߺ����Ǹ� ���ϱ� ���� ��ũ��
#ifndef NSPACE_H
#define NSPACE_H

#include <stdio.h>

// �����
namespace std
{
	class myprint
	{
	private:
		int len;

	public:
		myprint() : len(0) {}

		void print(const char* str);
		void print(int i);
		void print(double d);

		myprint& operator<<(const char* str);
		myprint& operator<<(int i);
		myprint& operator<<(double d);
		myprint& operator<<(myprint& (*f)(myprint&));

	};

	myprint& endl(myprint& m);
	extern myprint cout; // ���� ����, Ŭ���� ���� 

}

#endif // !NSPACE_H