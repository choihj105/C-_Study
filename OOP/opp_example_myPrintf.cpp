//#include <stdio.h>
//
//using namespace Mystd;
//namespace Mystd {
//	class ostream
//	{
//	private:
//		int len;
//
//	public:
//		void print(const char* str) { len += printf("%s ", str); }
//		void print(int i) { len += printf("%d ", i); }
//		void print(double d) { len += printf("%lf ", d); }
//
//		ostream& operator<<(const char* str) {
//			print(str);
//			return *this;
//		}
//		ostream& operator<<(int i) {
//			print(i);
//			return *this;
//		}
//		ostream& operator<<(double d) {
//			print(d);
//			return *this;
//		}
//
//		ostream& endl()
//		{
//			printf("\n");
//			return *this;
//		}
//
//		ostream& operator<<(ostream& (*f)(ostream&))
//		{
//			return f(*this);
//		}
//	};
//	
//	ostream& endl(ostream& p)
//	{
//		printf("\n");
//		return p;
//	}
//
//	ostream cout;
//}
//
//
//int main()
//{
//	
//	
//}