//#include <iostream>
//#include <string>
//using namespace std;
//
//class parent
//{
//private:
//	const string secret = "나는 엉덩이에 점이 두개있어요";
//	int age;
//
//protected:
//	void family_secret()
//	{
//		cout << "저희 가문은 대대로 내려오는 비밀이 있어요. 그건바로.." << endl;
//	}
//
//public:
//	parent(int user_age = 0) : age(user_age) {}
//	void explain()
//	{
//		cout << "저는 사람입니다." << endl;
//		cout << "나이는" << age << "세 입니다." << endl;
//	}
//
//		
//	
//};
//
//class child : protected parent {
//private:
//
//public:
//	child(int i) : parent(i) {}
//
//	void explain2()
//	{
//		explain();
//		
//	}
//};
//
//class child_child : public child {
//private:
//
//public:
//	child_child(int i) : child(i) {}
//
//	void explain3()
//	{
//		explain2();
//	}
//
//};
//
//
//
//int main()
//{
//	/*parent mom(55);
//	mom.explain();
//	mom.pray();*/
//	
//	
//	child child(5);
//	child.family_secret();
//	//child.pray();
//	
//	child_child child2(1);
//	child2.explain2();
//	//child2.pray();
//	return 0;
//}
//
//
//// 상속 public: 부모(public)만 사용가능,손자들도 사용 가능
//// 상속 protected : 부모(접근)만 사용가능이고, 손자들도 사용불가능
//// 상속 private : 부모(접근)만 사용가능이고, 손자들도 사용가능