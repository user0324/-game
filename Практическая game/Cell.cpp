// –еализаци€ класса ячейка  участок пол€ (1,1)
#include<iostream>
#include"Gamefield.h"
#include"Cell.h"
using std::cout;
using std::endl;
using std::cin;

Cell::Cell()		// онструктор класса €чейка
{
	this->x = x >= 1 ? x : 1;
	this->y = y >= 1 ? y : 1;
	this->Z = '@';
}
void Cell::SetXYZ(int x, int y, char z)		//”становить значение €чейки
{
	this->x = x >= 1 ? x : 1;
	this->y = y >= 1 ? y : 1;
	this->Z = z;
}
