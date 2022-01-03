// 헤더 중복정의를 피하기 위한 매크로
#ifndef NSPACE_H
#define NSPACE_H

#include <stdio.h>

// 선언부
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
	extern myprint cout; // 전역 변수, 클래스 선언 

}

#endif // !NSPACE_H