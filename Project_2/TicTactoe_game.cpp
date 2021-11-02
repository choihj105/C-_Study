#include<iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;
#define MAX_X 20
#define MAX_Y 10
int* playgame(char usericon);
void gotoxy(int x, int y);


int main() {

	char user[3][3] = { {' ',' ',' '}, {' ',' ',' '}, {' ',' ',' '}};
	char usericon;
	int usercnt = 1;
	int* status;
	bool isOnOFF= true;

	// 화면 출력문
	while (isOnOFF)
	{
		if (usercnt % 2 != 0) { usericon = 'O'; }
		else { usericon = 'X'; }

		for (int i = 1; i < 14; i++)
		{
			if (i == 1 || i == 5 || i == 9 || i == 13)
			{
				cout << "■■■■■■■■■■■■■";
			}
			else if (i == 3 || i == 7 || i == 11) {
				if (i == 3) {
					cout << "■  " << user[0][0] << "   ■  " << user[0][1] << "   ■  " << user[0][2] << "   ■";
				}
				else if (i == 7) {
					cout << "■  " << user[1][0] << "   ■  " << user[1][1] << "   ■  " << user[1][2] << "   ■";
				}
				else if (i == 11) {
					cout << "■  " << user[2][0] << "   ■  " << user[2][1] << "   ■  " << user[2][2] << "   ■";
				}
			}
			else
			{
				cout << "■      ■      ■      ■";
			}
			cout << endl;
		}

		// 게임 진행
		status = playgame(usericon);
		usercnt++; // 턴 마다 플레이어 icon이 바뀜
		system("cls"); // 화면 초기화
		if (status[0] == 4)
		{
			if (status[1] == 2) { user[0][0] = usericon; }
			else if (status[1] == 6) { user[1][0] = usericon; }
			else if (status[1] == 10) { user[2][0] = usericon; }
		}
		else if (status[0] == 12)
		{
			if (status[1] == 2) { user[0][1] = usericon; }
			else if (status[1] == 6) { user[1][1] = usericon; }
			else if (status[1] == 10) { user[2][1] = usericon; }
		}
		else if (status[0] == 20)
		{
			if (status[1] == 2) { user[0][2] = usericon; }
			else if (status[1] == 6) { user[1][2] = usericon; }
			else if (status[1] == 10) { user[2][2] = usericon; }
		}


		// 완료된 게임 시나리오
		// 가로
		if ((user[0][0] != ' ') && (user[0][0] == user[0][1]) && (user[0][0] == user[0][2]) && (user[0][1] == user[0][2])) {
			gotoxy(0, 0);
			if (user[0][0] == 'O') cout << "Player1 Win!";
			else if (user[0][0] == 'X') cout << "Player2 Win!";
			isOnOFF = false;

		}
		else if ((user[1][0] != ' ') && (user[1][0] == user[1][1]) && (user[1][0] == user[1][2]) && (user[1][1] == user[1][2])) {
			gotoxy(0, 0);
			if (user[1][0] == 'O') cout << "Player1 Win!";
			else if (user[1][0] == 'X') cout << "Player2 Win!";
			isOnOFF = false;

		}
		else if ((user[2][0] != ' ') && (user[2][0] == user[2][1]) && (user[2][0] == user[2][2]) && (user[2][1] == user[2][2])) {
			gotoxy(0, 0);
			if (user[2][0] == 'O') cout << "Player1 Win!";
			else if (user[2][0] == 'X') cout << "Player2 Win!";
			isOnOFF = false;

		}
		// 세로
		else if ((user[0][0] != ' ') && (user[0][0] == user[1][0]) && (user[0][0] == user[2][0]) && (user[1][0] == user[2][0])) {
			gotoxy(0, 0);
			if (user[0][0] == 'O') cout << "Player1 Win!";
			else if (user[0][0] == 'X') cout << "Player2 Win!";
			isOnOFF = false;

		}
		else if ((user[0][1] != ' ') && (user[0][1] == user[1][1]) && (user[0][1] == user[2][1]) && (user[1][1] == user[2][1])) {
			gotoxy(0, 0);
			if (user[0][1] == 'O') cout << "Player1 Win!";
			else if (user[0][1] == 'X') cout << "Player2 Win!";
			isOnOFF = false;

		}
		else if ((user[0][2] != ' ') && (user[0][2] == user[1][2]) && (user[0][2] == user[2][2]) && (user[1][2] == user[2][2])) {
			gotoxy(0, 0);
			if (user[0][2] == 'O') cout << "Player1 Win!";
			else if (user[0][2] == 'X') cout << "Player2 Win!";
			isOnOFF = false;

		}
		// 대각선
		else if ((user[0][0] != ' ') && (user[0][0] == user[1][1]) && (user[0][0] == user[2][2]) && (user[1][1] == user[2][2])) {
			gotoxy(0, 0);
			if (user[0][0] == 'O') cout << "Player1 Win!";
			else if (user[0][0] == 'X') cout << "Player2 Win!";
			isOnOFF = false;

		}
		else if ((user[0][2] != ' ') && (user[0][2] == user[1][1]) && (user[0][2] == user[2][0]) && (user[1][1] == user[2][0])) {
			gotoxy(0, 0);
			if (user[0][2] == 'O') cout << "Player1 Win!";
			else if (user[0][2] == 'X') cout << "Player2 Win!";
			isOnOFF = false;

		}
		// 무승부
		else if ((user[0][0] != ' ') && (user[0][1] != ' ') && (user[0][2] != ' ') && (user[1][0] != ' ') && (user[1][1] != ' ') && (user[1][2] != ' ') && (user[2][0] != ' ') && (user[2][1] != ' ') && (user[2][2] != ' '))
		{
			gotoxy(0, 0);
			cout << "DRAW!!! Try Again!";
			isOnOFF = false;
		}
	}
	return 0;
}

int* playgame(char usericon) {
	int X = (MAX_X / 2) + 2;
	int Y = (MAX_Y / 2) + 1;
	int static xy[2] = {0, 0};
	char icon = usericon;
	int keyin = 0;
	
	while (1) {
		gotoxy(0, MAX_Y + 4);
		cout << "Player 1: O " << " \n";
		cout << "Player 2: X " << " \n\n";
		cout << "(Press Enter)" <<" \n";

		gotoxy(X + 1, Y);
		cout << icon;
		keyin = _getch();
		cout << "\b ";
		switch (keyin) {
		case 224: // arrow keys
			keyin = _getch();
			switch (keyin) {
			case 72: // up
				if (Y != 2) Y -= 4;
				break;
			case 75: // left
				if (X != 4) X -= 8;
				break;
			case 77: // right
				if (X != MAX_X) X += 8;
				break;
			case 80: // down
				if (Y != MAX_Y) Y += 4;
				break;
			}
			break;

		case 13: // enter
			xy[0] = X;
			xy[1] = Y;
			return xy;
			break;
		}
	}
}

void gotoxy(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}