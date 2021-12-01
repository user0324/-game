//клиентский код
#include<iostream>
#include<vector>
#include<conio.h>
#include"Gamefield.h"
#include"Object.h"
#include"Unit.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
	Object a1;
	Gamefield b(10,7);		//создание объекта в стеке
	std::vector<std::vector <Object*> > a2 = a1.SetConsolObject(b);
	b.DefinitionField(a2);
	a1.SetOneObject(a2, b, 5, 5, '&');
	a1.SetOneObject(a2, b, 3, 3, ' ');
	Unit u;
	a1.SetUnitObject(a2, b, u);
	b.DefinitionField(a2);
}