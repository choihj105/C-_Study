#include <iostream>
#include <random>
using namespace std;

int g_one, g_two, g_three, g_four, g_five, g_six;

void rollDice(int num);
void printGraph(int n);

int main()
{
	int times;
	float a, b, c, d, e, f;

	cout << "Roll a dice 'n' times: ";
	cin >> times;

	rollDice(times);
	
	a = (int)(((float)g_one / times) * 100)/2;
	b = (int)(((float)g_two / times) * 100)/2;
	c = (int)(((float)g_three / times) * 100)/2;
	d = (int)(((float)g_four / times) * 100)/2;
	e = (int)(((float)g_five / times) * 100)/2;
	f = (int)(((float)g_six / times) * 100)/2;

		cout << endl << "1: " ;
		printGraph(a);

		cout << endl << "2: ";
		printGraph(b);

		cout << endl << "3: ";
		printGraph(c);

		cout << endl << "4: ";
		printGraph(d);

		cout << endl << "5: ";
		printGraph(e);

		cout << endl << "6: ";
		printGraph(f);

	return 0;
}

void rollDice(int num)
{
	random_device rd;
	mt19937 gen(rd());

	int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0;

	for (int i = 0; i < num; i++)
	{
		int temp = gen() % 6 + 1;

		(temp == 1) ? one++ :
			(temp == 2) ? two++ :
			(temp == 3) ? three++ :
			(temp == 4) ? four++ :
			(temp == 5) ? five++ : six++;
	}

	g_one = one; g_two = two; g_three = three;
	g_four = four; g_five = five; g_six = six;
	return;
}

void printGraph(int n)
{
	for (int i = 0; i < n; i++) { cout << "@"; }
	for (int i = 0; i < 50 - n; i++) { cout << "*"; }
	return;
}