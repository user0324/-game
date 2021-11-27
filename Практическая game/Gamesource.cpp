//клиентский код
#include<iostream>
#include<vector>
#include<conio.h>
#include"Gamefield.h"
#include"Object.h"
#include"Screen.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{
	Screen a;			//создание объекта в стеке
	Gamefield b;		//создание объекта в стеке
	int SumObjectov = a.GoGamefield(b);

	cout << endl << SumObjectov << endl;		//для отладки
	Object c;			//создание объекта в стеке
	std::vector<std::vector<Object*>> a1;		//создание объекта в куче
	a1 = c.CreatingObject(b);
	b.DefinitionField(a1);
}