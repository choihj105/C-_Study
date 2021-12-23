// interface, framework // menu bar

#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

#define clrscr() system("cls");

#define getkey() _getch();

using namespace std;

class AbstractMenu {
	string title;
public:
	AbstractMenu(string s) : title(s) {}
	virtual ~AbstractMenu() {}
	
	string getTitle() { return title; }

	virtual void command() = 0;
};

class MenuItem : public AbstractMenu {
	int id;
public:
	MenuItem(string s, int i) : AbstractMenu(s), id(i) {}

	virtual void command() {
		cout << getTitle() << " is selected" << endl;
		getkey();
	}
};

class PopupMenu : public AbstractMenu {
	vector<AbstractMenu*> v; // Composite ����
public:
	PopupMenu(string s): AbstractMenu(s){}
	~PopupMenu() {
		for (int i = 0; i < v.size(); i++)
		{
			delete v[i];
		}
	}

	void addMenu(AbstractMenu* p) {
		v.push_back(p);
	}

	virtual void command() {
		while (true) {
			clrscr();
			
			int size = v.size();

			for (int i = 0; i < size; i++)
				cout << i + 1 << ". " << v[i]->getTitle() << endl;

			cout << size + 1 << ". << Back" << endl;

			cout << "Select an item >> ";
			int cmd;
			cin >> cmd;

			if (cmd == size + 1) break;
			if (cmd < 1 || cmd > size + 1) continue;

			v[cmd - 1]->command();
		}
	}
};

int main()
{
	PopupMenu* menubar = new PopupMenu("root");

	PopupMenu* p1 = new PopupMenu("�ֹ��ϱ�");
	PopupMenu* p2 = new PopupMenu("�����ϱ�");

	menubar->addMenu(p1);
	menubar->addMenu(p2);

	PopupMenu* p11 = new PopupMenu("����");
	PopupMenu* p12 = new PopupMenu("����/���");
	PopupMenu* p13 = new PopupMenu("��ŰƮ");
	PopupMenu* p14 = new PopupMenu("����/�õ�/����丮");
	PopupMenu* p15 = new PopupMenu("ä��");

	p1->addMenu(p11);
	p1->addMenu(p12);
	p1->addMenu(p13);
	p1->addMenu(p14);
	p1->addMenu(p15);

	p11->addMenu(new MenuItem("���� �ӽ���", 111));
	p11->addMenu(new MenuItem("����", 112));
	p12->addMenu(new MenuItem("�������", 121));
	p12->addMenu(new MenuItem("�Ұ��", 122));
	p13->addMenu(new MenuItem("���ٽ� ��ŰƮ", 131));
	p13->addMenu(new MenuItem("������� ��ŰƮ", 132));
	p14->addMenu(new MenuItem("����", 141));
	p14->addMenu(new MenuItem("������", 142));
	p15->addMenu(new MenuItem("����", 151));
	p15->addMenu(new MenuItem("����", 152));

	PopupMenu* p21 = new PopupMenu("ī�����");
	PopupMenu* p22 = new PopupMenu("���ݰ���");
	
	p2->addMenu(p21);
	p2->addMenu(p22);

	menubar->command();
	delete menubar;
}