//1. Hash table 
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class phonebook
{
	map<int, vector<string>> table;

public:
	int hash(const string& s)
	{
		int ret = 0;
		for (auto i : s) ret += i;
		return ret % 8;
	}

	void input(const string& name, const string& number)
	{
		vector<string> vec;

		// 해쉬 값이 없을때
		if (table.find(hash(name)) == table.end()) {
			vec = {number};
			table.insert(make_pair(hash(name), vec));
		}
		// 해쉬 값이 있었을 때
		else
		{
			vec = table[hash(name)];
			vec.push_back(number);
			table[hash(name)] = vec;
		}

	}

	void get(const string& name)
	{
		cout << "*** get:" << name << " /key: " << hash(name) << endl;
		for (auto it : table[hash(name)])
		{
			cout << it << endl;
		}
	}

};

int main()
{
	phonebook p;

	p.input("chonnam", "111-1111");

	p.input("national", "222-2222");

	p.input("university", "333-3333");

	p.input("c++", "444-4444");

	p.input("programming", "555-5555");

	p.input("and", "666-6666");

	p.input("practice", "777-7777");



	p.get("chonnam");

	p.get("national");

	p.get("university");

	p.get("c++");

	p.get("programming");

	p.get("and");

	p.get("practice");


	return 0;
};