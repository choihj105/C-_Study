//#include <iostream>
//#include <string>
//using namespace std;
//
//class parent
//{
//private:
//	const string secret = "���� �����̿� ���� �ΰ��־��";
//	int age;
//
//protected:
//	void family_secret()
//	{
//		cout << "���� ������ ���� �������� ����� �־��. �װǹٷ�.." << endl;
//	}
//
//public:
//	parent(int user_age = 0) : age(user_age) {}
//	void explain()
//	{
//		cout << "���� ����Դϴ�." << endl;
//		cout << "���̴�" << age << "�� �Դϴ�." << endl;
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
//// ��� public: �θ�(public)�� ��밡��,���ڵ鵵 ��� ����
//// ��� protected : �θ�(����)�� ��밡���̰�, ���ڵ鵵 ���Ұ���
//// ��� private : �θ�(����)�� ��밡���̰�, ���ڵ鵵 ��밡��