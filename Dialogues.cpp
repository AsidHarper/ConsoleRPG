#include "Printer.h"
#include "Dialogues.h"
using namespace std;

void Dialogues::Chapter_0(){
	Printer printer;
	int line = 0;
	char gamedate[8] = "2Э.582г";
	char gamelocation[23] = "о.Ауридон, г.Ферстхолд";
	char gameintro[236] = "Вы – наемник из гильдии Неустрашимых, местный правитель нанял вас для того, чтобы вы помогли сдержать пытающегося сбежать из “Темниц Изгнанников” заключенного, который угрожает целостности самого острова, на котором вы находитесь.";
	printer.PrintStuff(gamedate,line);
	printer.DePrintStuff(gamedate, line);
	printer.PrintStuff(gamelocation,line);
	printer.DePrintStuff(gamelocation, line);
	printer.PrintStuff(gameintro,line);
	printer.DePrintStuff(gameintro,line);
}

