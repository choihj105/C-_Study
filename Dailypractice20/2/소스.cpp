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
	vector<AbstractMenu*> v; // Composite 패턴
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

	PopupMenu* p1 = new PopupMenu("주문하기");
	PopupMenu* p2 = new PopupMenu("결제하기");

	menubar->addMenu(p1);
	menubar->addMenu(p2);

	PopupMenu* p11 = new PopupMenu("과일");
	PopupMenu* p12 = new PopupMenu("정육/계란");
	PopupMenu* p13 = new PopupMenu("밀키트");
	PopupMenu* p14 = new PopupMenu("냉장/냉동/간편요리");
	PopupMenu* p15 = new PopupMenu("채소");

	p1->addMenu(p11);
	p1->addMenu(p12);
	p1->addMenu(p13);
	p1->addMenu(p14);
	p1->addMenu(p15);

	p11->addMenu(new MenuItem("샤인 머스켓", 111));
	p11->addMenu(new MenuItem("망고", 112));
	p12->addMenu(new MenuItem("돼지고기", 121));
	p12->addMenu(new MenuItem("소고기", 122));
	p13->addMenu(new MenuItem("감바스 밀키트", 131));
	p13->addMenu(new MenuItem("샤브샤브 밀키트", 132));
	p14->addMenu(new MenuItem("만두", 141));
	p14->addMenu(new MenuItem("떡갈비", 142));
	p15->addMenu(new MenuItem("상추", 151));
	p15->addMenu(new MenuItem("배추", 152));

	PopupMenu* p21 = new PopupMenu("카드결제");
	PopupMenu* p22 = new PopupMenu("현금결제");
	
	p2->addMenu(p21);
	p2->addMenu(p22);

	menubar->command();
	delete menubar;
}