// ��� �ߺ����Ǹ� ���ϱ� ���� ��ũ��
#ifndef NSPACE_H
#define NSPACE_H

#include <stdio.h>

// �����
namespace std
{
	class ostream
	{
	private:
		int len;

	public:
		ostream() : len(0) {}

		void print(const char* str);
		void print(int i);
		void print(double d);

		ostream& operator<<(const char* str);
		ostream& operator<<(int i);
		ostream& operator<<(double d);
		ostream& operator<<(ostream& (*f)(ostream&));

	};

	extern ostream& endl(ostream& m);
	extern ostream cout; // ���� ����, Ŭ���� ���� 

}

#endif // !NSPACE_H


/*
���� <iostream> ���̺귯��
#include <ios>
#include <streambuf>
#include <istream>
#include <ostream>

namespace std {
  extern istream cin;
  extern ostream cout;
  extern ostream cerr;
  extern ostream clog;
  extern wistream wcin;
  extern wostream wcout;
  extern wostream wcerr;
  extern wostream wclog;
}
*/