#include <iostream>
using namespace std;

int main()
{
	char encryptedstr[9];
	char decryptedstr[9];
	int key;

	encryptedstr[8] = '\0';
	decryptedstr[8] = '\0';

	cout << "Input string : ";
	cin >> encryptedstr;
	cout << "Input key : ";
	cin >> key;

	// 65~90
	decryptedstr[0] = (encryptedstr[0] - 65 - key) < 0 ? 91+ (encryptedstr[0] - 65 - key) : encryptedstr[0] - key;
	decryptedstr[1] = (encryptedstr[1] - 65 - key) < 0 ? 91 + (encryptedstr[1] - 65 - key) : encryptedstr[1] - key;
	decryptedstr[2] = (encryptedstr[2] - 65 - key) < 0 ? 91 + (encryptedstr[2] - 65 - key) : encryptedstr[2] - key;
	decryptedstr[3] = (encryptedstr[3] - 65 - key) < 0 ? 91 + (encryptedstr[3] - 65 - key) : encryptedstr[3] - key;
	decryptedstr[4] = (encryptedstr[4] - 65 - key) < 0 ? 91 + (encryptedstr[4] - 65 - key) : encryptedstr[4] - key;
	decryptedstr[5] = (encryptedstr[5] - 65 - key) < 0 ? 91 + (encryptedstr[5] - 65 - key) : encryptedstr[5] - key;
	decryptedstr[6] = (encryptedstr[6] - 65 - key) < 0 ? 91 + (encryptedstr[6] - 65 - key) : encryptedstr[6] - key;
	decryptedstr[7] = (encryptedstr[7] - 65 - key) < 0 ? 91 + (encryptedstr[7] - 65 - key) : encryptedstr[7] - key;

	cout << "decrypted string : ";
	cout << decryptedstr;
	
	return 0;
}