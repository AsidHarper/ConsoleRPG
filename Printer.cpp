#include "Printer.h"
#pragma warning(disable:4996)
#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void Printer::PrintStuff(char text[]) {
	COORD pos;
	pos.X = 0;
	//pos.Y = placeholder;
	int LineLen = 100;
	int CurrentLen = 0;
	for (int i = 0; i < strlen(text); i++)
	{
		cout << text[i];
		Sleep(25);
		if (CurrentLen == LineLen) {
			cout << endl;
			CurrentLen = 0;
		}
		CurrentLen++;
	}
	cout << endl << "Для продолжения нажмите пробел";
	char ch;
	int code;
	while (1)
	{
		ch = getch();
		code = static_cast<int>(ch);
		if (ch == 32)
			break;
	}
}
void Printer::DePrintStuff(char text[]) {
	int LineLen = 100;
	int CurrentLen = 0;
	COORD pos;
	pos.X = 0;
	//pos.Y = placeholder;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	for (int i = 0; i < strlen(text); i++)
	{
		cout << " ";
		Sleep(10);
		if (CurrentLen == LineLen) {
			cout << endl;
			CurrentLen = 0;
		}
		CurrentLen++;
	}
	system("cls");
}
void Printer::PrintStuff(char text[], int line) {
	COORD pos;
	pos.X = 0;
	pos.Y = line;
	int LineLen = 100;
	int CurrentLen = 0;
	for (int i = 0; i < strlen(text); i++)
	{
		cout << text[i];
		Sleep(25);
		if (CurrentLen == LineLen) {
			cout << endl;
			CurrentLen = 0;
		}
		CurrentLen++;
	}
	cout << endl << "Для продолжения нажмите пробел";
	char ch;
	int code;
	while (1)
	{
		ch = getch();
		code = static_cast<int>(ch);
		if (ch == 32)
			break;
	}
}
void Printer::DePrintStuff(char text[], int line) {
	int LineLen = 100;
	int CurrentLen = 0;
	COORD pos;
	pos.X = 0;
	pos.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	for (int i = 0; i < strlen(text); i++)
	{
		cout << " ";
		Sleep(10);
		if (CurrentLen == LineLen) {
			cout << endl;
			CurrentLen = 0;
		}
		CurrentLen++;
	}
	system("cls");
}