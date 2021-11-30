//Реализация класса экран
#include<iostream>
#include"Gamefield.h"
#include "Screen.h"
using std::cout;
using std::endl;
using std::cin;

Screen::Screen()		//классический конструктор
{
	this->game = true;
}
void Screen::CLS()const			//очистка экрана
{
	system("cls");		//для windows
	/*system("clear");*/		//для linux
}
int Screen::GoGamefield(Gamefield& a)		//задание размеров поля
{
	setlocale(LC_ALL, "Russian");
	int Y, X;
	cout << "Задайте размеры игровогопля:" << endl;
	while (true)
	{
		cout << "Задайте количество строк:" << endl;
		cin >> X;
		if (cin.fail())
		{
			cout << "Это должно быть число" << endl;
			cin.clear();
			cin.ignore(32767, '\n');
			continue;
		}
		if (X < 2)
		{
			cout << " Значение должно быть больше 2-х" << endl;
			continue;
		}
		if (X > 25)
		{
			cout << " Возможное значение <В диапозоне от 2-25>" << endl;
			continue;
		}
		else break;
	}
	while (true)
	{
		cout << "Задайте количество столбцов:" << endl;
		cin >> Y;
		if (cin.fail())
		{
			cout << "Это должно быть число" << endl;
			cin.clear();
			cin.ignore(32767, '\n');
			continue;
		}
		if (Y < 2)
		{
			cout << " Значение должно быть больше 2-х" << endl;
			continue;
		}
		if (Y > 25)
		{
			cout << " Возможное значение <В диапозоне от 2-25>" << endl;
			continue;
		}
		else break;
	}
	a.SetAxisYX(X, Y);
	int SumObjectov = a.MaxControl();
	return SumObjectov;
}
