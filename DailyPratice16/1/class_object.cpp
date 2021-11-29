//#include <iostream>
//#include <vector>
//using namespace std;
//
////class pig
////{
////	int total;
////
////public:
////
////	pig(int t = 0) : total(t) {}
////
////	int operator()(int a)
////	{
////		total += a;
////		return total;
////	}
////
////};
////
//
//// 객체로 조건을 만들어버림
//struct UP { bool operator()(int a, int b) { return a > b; } };
//struct DOWN { bool operator()(int a, int b) { return a < b; } };
//struct ABS { bool operator()(int a, int b) { return abs(a) < abs(b); } };
//
//// Bubble sort
////void Sort(int* x, int n, bool (*cmp)(int, int))
//
////template<typename T>
////void Sort(int* x, int n, T cmp)
////{
////
////
////	for (int i = 0; i < n; i++)
////	{
////		for(int j = i; j<n;j++)
////			if (cmp(x[i], x[j]))
////			{
////				int tmp = x[i];
////				x[i] = x[j];
////				x[j] = tmp;
////			}
////	}
//// 
//template<typename T, typename U>
//void Sort(U begin, U end, T cmp)
//{
//	for (auto i = begin; i != end; i++)
//	{
//		for(auto j = i; j != end;j++)
//			if (cmp(*i, *j))
//			{
//				int tmp = *i;
//				*i = *j;
//				*j = tmp;
//			}
//	}
//}
//
////bool cmp1(int a, int b) {return a > b;}
////bool cmp2(int a, int b) { return a < b; }
////bool cmp3(int a, int b) { return abs(a) < abs(b); }
//
//int main()
//{
//	int arr[] = { 6,5,9,4,8,1,3 };
//
//	UP u;
//	DOWN d;
//	ABS a;
//
//	Sort(arr, arr+7, [](int a, int b) {return a > b; }); // 코드를 통째로 넘겨줌 람다 표현식
//
//	for (auto i : arr)
//		cout << i << endl;
//
//
//	vector<int> v;
//	v.push_back(-1);
//	v.push_back(2);
//	v.push_back(5);
//	v.push_back(-2);
//	v.push_back(-3);
//	v.push_back(-5);
//
//	Sort(v.begin(), v.end(), [](int a, int b) {return a > b; });
//	for (auto i : v)
//		cout << i << " ";
//
//	return 0;
//}