#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	int id;

	cout << "Your student number: ";
	cin >> id;
	cout << endl;

	cout << "Your name: ";
	cin >> name;
	cout << endl;

	cout << "My name is " << name << endl;
	cout << "My student ID is " << id << endl;
	cout << "My name and ID is " << name << " and " << id << endl;

	return 0;
}