#include <iostream>
using namespace std;

int main()
{
	char plainstr[9];
	char cipherstr[9];
	int key;

	plainstr[8] = '\0';
	cipherstr[8] = '\0';

	cout << "Input string : ";
	cin >> plainstr;
	cout << "Input key : ";
	cin >> key;

	// 65~90
	cipherstr[0] = (plainstr[0] + key -65) % 26 + 65;
	cipherstr[1] = (plainstr[1] + key -65) % 26 + 65;
	cipherstr[2] = (plainstr[2] + key -65) % 26 + 65;
	cipherstr[3] = (plainstr[3] + key -65) % 26 + 65;
	cipherstr[4] = (plainstr[4] + key -65) % 26 + 65;
	cipherstr[5] = (plainstr[5] + key -65) % 26 + 65;
	cipherstr[6] = (plainstr[6] + key -65) % 26 + 65;
	cipherstr[7] = (plainstr[7] + key -65) % 26 + 65;

	cout << "Cipher string : ";
	cout << cipherstr;
	
	return 0;
}