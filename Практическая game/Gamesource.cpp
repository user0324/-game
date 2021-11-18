//клиентский код
#include<iostream>
#include<conio.h>
#include"Screen.h"
#include"Gamefield.h"
#include"Gameunit.h"
#include"Cell.h"
#include"Object.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{

	Gamefield a;		//создание обекта в стеке
	a.SetXY(5, 5);
	char Y = ' ';
	Screen test;
	char object = '@';
	test.PrintScr(a, 2, 2, object);
	/*a.Print(0, 0, Y, game);*/
	a.PrintXY();
	int Z = a.MaxControl();
	cout <<"MaxControl = "<< Z << endl;
	system("pause");
	
	/*a.Print(4, 3, z, game);*/

}