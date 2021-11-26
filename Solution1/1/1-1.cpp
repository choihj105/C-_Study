//#include <iostream>
//#include <string>
//#include <memory>
//#include <vector>
//using namespace std;
//
//char* xstrchr(char* s, char c)
//{
//	while (s != NULL && *s != c)
//		++s;
//
//	return *s == 0? 0: s;
//}
//
//
//char* xstrchr(char* first , char* last, char c)
//{
//	while (first != last && *first != c)
//		++first;
//	return first == last ? 0 : first;
//}
//
//template<typename T>
//T* xstrchr(T* first , T* last, T c)
//{
//	while (first != last && *first != c)
//		++first;
//	return first == last ? 0 : first;
//}
//
////template<typename T, typename U>
////T xstrchr(T first , T last, U c)
////{
////	while (first != last && *first != c)
////		++first;
////	return first == last ? 0 : first;
////}
//
//template<typename T, typename U>
//T xfind(T first , T last, U c)
//{
//	while (first != last && first != c)
//		++first;
//	return first; // == last ? 0 : first;
//}
//
//
//int main()
//{
//
//	double d[] = { 1.0, 2.0, 3.0, 4.0 };
//	double* q = xfind(d, d + 3, 5);
//
//	
//	if (q == d + 3) cout << "Error" << endl;
//	else cout << *q << endl;
//
//
//	return 0;
//}