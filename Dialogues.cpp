#include "Printer.h"
#include "Dialogues.h"
using namespace std;

void Dialogues::Chapter_0(){
	Printer printer;
	int line = 0;
	char gamedate[8] = "2�.582�";
	char gamelocation[23] = "�.�������, �.���������";
	char gameintro[236] = "�� � ������� �� ������� ������������, ������� ��������� ����� ��� ��� ����, ����� �� ������� �������� ����������� ������� �� ������� ����������� ������������, ������� �������� ����������� ������ �������, �� ������� �� ����������.";
	printer.PrintStuff(gamedate,line);
	printer.DePrintStuff(gamedate, line);
	printer.PrintStuff(gamelocation,line);
	printer.DePrintStuff(gamelocation, line);
	printer.PrintStuff(gameintro,line);
	printer.DePrintStuff(gameintro,line);
}

