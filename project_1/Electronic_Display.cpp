#include <iostream>
#include <string>
#include <windows.h>
#include <random>
using namespace std;
void direction(char dct);
void cvt(char *chr, int num); // A~ Z + ! + ? 배열에 값을 그려 넣어주는 함수

int main() {

	string content;
	char direct;
	double speed;
	random_device rd;
	mt19937 gen(rd());

	// A ~ Z + ! + ? 28자 배열 선언
	char A[5][3], B[5][3], C[5][3], D[5][3], E[5][3], F[5][3], G[5][3],
		H[5][3], I[5][3], J[5][3], K[5][3], L[5][3], M[5][3], N[5][3],
		O[5][3], P[5][3], Q[5][3], R[5][3], S[5][3], T[5][3], U[5][3],
		V[5][3], W[5][3], X[5][3], Y[5][3], Z[5][3], Bang[5][3], Question[5][3];

	// A ~ Z + ! + ? 총 28문자에대한 패턴배열
	int characterPtn[28][5] =
	{ {7, 5, 7, 5, 5},{7, 5, 4, 5, 7},{7, 1, 1, 1, 7},{4, 5, 5, 5, 4},{7,1,7,1,7},{7, 1, 7, 1, 1},{7, 1, 5, 5, 7},
		{5, 5, 7, 5, 5},{2, 2, 2, 2, 2},{3, 3, 3, 3, 4},{5, 5, 4, 5, 5},{1, 1, 1, 1, 7},{5, 7, 7, 5, 5},{5, 5, 7, 5 ,5},
		{7, 5, 5, 5, 7},{7, 5, 7, 1, 1},{7, 5, 5, 7, 3},{7, 5, 4, 5, 5},{7, 1, 7, 3, 7},{7, 2, 2, 2, 2},{5, 5, 5, 5, 7},
		{5, 5, 5, 5, 2},{5, 5, 7, 7, 5},{5, 5, 2, 5, 5},{5, 5, 7, 3, 7},{7, 3, 2, 1, 7},{2, 2, 2, 0, 2},{7, 3, 2, 0, 1}
	};

	// 배열 값 입력
	for (int i = 0; i < 5; i++)
	{
		cvt(A[i], characterPtn[0][i]);
		cvt(B[i], characterPtn[1][i]);
		cvt(C[i], characterPtn[2][i]);
		cvt(D[i], characterPtn[3][i]);
		cvt(E[i], characterPtn[4][i]);
		cvt(F[i], characterPtn[5][i]);
		cvt(G[i], characterPtn[6][i]);
		cvt(H[i], characterPtn[7][i]);
		cvt(I[i], characterPtn[8][i]);
		cvt(J[i], characterPtn[9][i]);
		cvt(K[i], characterPtn[10][i]);
		cvt(L[i], characterPtn[11][i]);
		cvt(M[i], characterPtn[12][i]);
		cvt(N[i], characterPtn[13][i]);
		cvt(O[i], characterPtn[14][i]);
		cvt(P[i], characterPtn[15][i]);
		cvt(Q[i], characterPtn[16][i]);
		cvt(R[i], characterPtn[17][i]);
		cvt(S[i], characterPtn[18][i]);
		cvt(T[i], characterPtn[19][i]);
		cvt(U[i], characterPtn[20][i]);
		cvt(V[i], characterPtn[21][i]);
		cvt(W[i], characterPtn[22][i]);
		cvt(X[i], characterPtn[23][i]);
		cvt(Y[i], characterPtn[24][i]);
		cvt(Z[i], characterPtn[25][i]);
		cvt(Bang[i], characterPtn[26][i]);
		cvt(Question[i], characterPtn[27][i]);
	} 
	char Blank[5][3] = { {' ',' ',' '},{' ',' ',' '},{' ',' ',' '},{' ',' ',' '},{' ',' ',' '} };

	// 사용자 입력문
	cout << "input: ";
	getline(cin, content);
	cout << "direction(L, R, U, D, R): ";
	cin >> direct;
	cout << "Speed (sec): ";
	cin >> speed;

	// 입력문 대문자로
	for (int i = 0; i < content.size(); i++) {
		content[i] = toupper(content[i]);
	}

	// 동적 포인터 배열 선언
	int size = content.size();
	char **contentarr = new char*[size];


	// 동적 포인터 배열에 사용자 값 집어넣기
	for (int i = 0; i < size; i++) {
		switch (content[i])
		{
		case 'A':
			contentarr[i] = A[0];
			break;
		case 'B':
			contentarr[i] = B[0];
			break;
		case 'C':
			contentarr[i] = C[0];
			break;
		case 'D':
			contentarr[i] = D[0];
			break;
		case 'E':
			contentarr[i] = E[0];
			break;
		case 'F':
			contentarr[i] = F[0];
			break;
		case 'G':
			contentarr[i] = G[0];
			break;
		case 'H':
			contentarr[i] = H[0];
			break;
		case 'I':
			contentarr[i] = I[0];
			break;
		case 'J':
			contentarr[i] = J[0];
			break;
		case 'K':
			contentarr[i] = K[0];
			break;
		case 'L':
			contentarr[i] = L[0];
			break;
		case 'M':
			contentarr[i] = M[0];
			break;
		case 'N':
			contentarr[i] = N[0];
			break;
		case 'O':
			contentarr[i] = O[0];
			break;
		case 'P':
			contentarr[i] = P[0];
			break;
		case 'Q':
			contentarr[i] = Q[0];
			break;
		case 'R':
			contentarr[i] = R[0];
			break;
		case 'S':
			contentarr[i] = S[0];
			break;
		case 'T':
			contentarr[i] = T[0];
			break;
		case 'U':
			contentarr[i] = U[0];
			break;
		case 'V':
			contentarr[i] = V[0];
			break;
		case 'W':
			contentarr[i] = W[0];
			break;
		case 'X':
			contentarr[i] = X[0];
			break;
		case 'Y':
			contentarr[i] = Y[0];
			break;
		case 'Z':
			contentarr[i] = Z[0];
			break;
		case '!':
			contentarr[i] = Bang[0];
			break;
		case '?':
			contentarr[i] = Question[0];
			break;
		case ' ':
			contentarr[i] = Blank[0];
			break;
		default:
			cout << "다른 문자열입니다.";
			break;
		}
	}
	
	// 출력하는 배열 입력문
	char temp;
	int cnt;
	int j= 0;
	int rnd = gen()%4;
	char result[5][200];

	// 랜덤 선택시
	if (direct == 'R') {
		if (rnd == 0) {
			direct = 'L';
		}
		else if(rnd == 1) {
			direct = 'R';
		}
		else if (rnd == 2) {
			direct = 'U';
		}
		else if (rnd == 3) {
			direct = 'D';
		}
	}


	for (int j = 0; j < 5; j++)
	{
		cnt = 0;
		for (int i = 0; i < size; i++) {
			for (int k = 0; k < 3; k++)
			{				
				temp = *(contentarr[i] + k + (j * 3)); //012 345 678 91011 121314
				result[j][cnt] = temp;
				cnt++;
			
			}
			result[j][cnt] = ' ';
			cnt++;
		}
	}


	// direct L
	if (direct == 'L') {
		while (true) {
			system("cls");
			j = j % (cnt + 1);
			for (int i = 0; i < 5; i++)
			{
				for (int k = j; k < cnt; k++)
				{
					cout << result[i][k];
				}
				for (int k = 0; k < j; k++)
				{
					cout << result[i][k];
				}
				cout << endl;
			}
			Sleep(speed * 1000);

			j++;
		}
	}
	else if (direct == 'R')
	{
		while (true) {
			system("cls");
			j = j % (cnt + 1);
			for (int i = 0; i < 5; i++)
			{
				
				for (int k = cnt-j; k < cnt; k++)
				{
					cout << result[i][k];
				}
				for (int k = 0; k < cnt-j; k++)
				{
					cout << result[i][k];
				}
				
				cout << endl;
			}
			Sleep(speed * 1000);

			j++;
		}
	}
	else if (direct == 'U')
	{
		while (true) {
			system("cls");
			j = j % 5;
			for (int i = j; i < 5; i++)
			{
				for (int k = 0; k < cnt; k++)
				{
					cout << result[i][k];
				}
				cout << endl;
			}
			for (int i = 0; i < j; i++)
			{
				for (int k = 0; k < cnt; k++)
				{
					cout << result[i][k];
				}
				cout << endl;
			}
			
			Sleep(speed * 1000);

			j++;
		}
	}
	else if (direct == 'D') {
		while (true)
		{
			system("cls");
			j = j % 5;
			for (int i = 5-j; i < 5; i++)
			{
				for (int k = 0; k < cnt; k++)
				{
					cout << result[i][k];
				}
				cout << endl;
			}
			for (int i = 0; i < 5-j; i++)
			{
				for (int k = 0; k < cnt; k++)
				{
					cout << result[i][k];
				}
				cout << endl;
			}

			Sleep(speed * 1000);

			j++;
		}
	}

	return 0;
}


// A~Z + !+ ? 문자를 그려서 배열값에 집어넣어주는 함수
void cvt(char *chr,int num)
{
	char ptn0[4] = { ' ', ' ', ' ' };
	char ptn1[4] = { '*', ' ', ' ' };
	char ptn2[4] = { ' ', '*', ' ' };
	char ptn3[4] = { ' ', ' ', '*' };
	char ptn4[4] = { '*', '*', ' ' };
	char ptn5[4] = { '*', ' ', '*' };
	char ptn6[4] = { ' ', '*', '*' };
	char ptn7[4] = { '*', '*', '*' };

	if (num == 0) {
		for (int i = 0; i < 3; i++)
		{
			*(chr + i) = ptn0[i];
		}
	}
	else if(num == 1)
	{
		for (int i = 0; i < 3; i++)
		{
			*(chr + i) = ptn1[i];
		}
	}
	else if (num == 2)
	{
		for (int i = 0; i < 3; i++)
		{
			*(chr + i) = ptn2[i];
		}
	}
	else if (num == 3)
	{
		for (int i = 0; i < 3; i++)
		{
			*(chr + i) = ptn3[i];
		}
	}
	else if (num == 4)
	{
		for (int i = 0; i < 3; i++)
		{
			*(chr + i) = ptn4[i];
		}
	}
	else if (num == 5)
	{
		for (int i = 0; i < 3; i++)
		{
			*(chr + i) = ptn5[i];
		}
	}
	else if (num == 6)
	{
		for (int i = 0; i < 3; i++)
		{
			*(chr + i) = ptn6[i];
		}
	}
	else if (num == 7)
	{
		for (int i = 0; i < 3; i++)
		{
			*(chr + i) = ptn7[i];
		}
	}
}

