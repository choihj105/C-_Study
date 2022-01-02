#include <iostream>
using namespace std;

int main()
{
	int numItem, originalCost, discountCost;
	int price = 1000;

	cout << "number of items ? ";
	cin >> numItem;
	originalCost = price * numItem;

	if (numItem >= 10) {
		discountCost = originalCost * 0.9;
		cout << "original price : " << originalCost << " KRW " << endl;
		cout << "discounted price : " << discountCost << " KRW " << endl;
	}
	else {
		cout << "original price : " << originalCost << " KRW " << endl;
	}

	return 0;
}