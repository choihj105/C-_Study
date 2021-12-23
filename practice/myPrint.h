#include <stdio.h>
namespace std
{
	class myprint
	{
	private:
		int len;

	public:
		myprint() : len(0) {}

		void print(const char* str) { len += printf("%s ", str); }
		void print(int i) { len += printf("%d ", i); }
		void print(double d) { len += printf("%lf ", d); }

		myprint& operator<<(const char* str) {
			print(str);
			return *this;
		}
		myprint& operator<<(int i) {
			print(i);
			return *this;
		}
		myprint& operator<<(double d) {
			print(d);
			return *this;
		}

		myprint& operator<<(myprint& (*f)(myprint&)) {
			return f(*this);
		}

	};

	myprint& endl(myprint& m)
	{
		printf("\n");
		return m;
	}

	myprint cout;
}
