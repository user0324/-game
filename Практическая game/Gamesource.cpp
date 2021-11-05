//клиентский код
#include<iostream>
#include"Gamefield.h"
#include"Gameunit.h"
#include"Cell.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{
	
	Gamefield a;		//создание обекта в стеке
	a.SetXY(5, 5);
	char Y = ' ';
	a.Print(0, 0, Y);
	a.PrintXY();
	int Z = a.MaxControl();
	cout <<"MaxControl = "<< Z << endl;
	system("pause");
	char z = '@';
	a.Print(4, 3, z);

}