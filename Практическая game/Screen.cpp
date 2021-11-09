// Реализация класса игровоеполе
#include<iostream>
#include"Gamefield.h"
#include"Screen.h"
using std::cout;
using std::endl;

Screen::Screen()		//Конструктор класса экран
{
	game = false;
	cout << "Clasic Konstruktor";
}
void Screen::SetGame(bool game_)		//Установить значение класса Экран
{
	game = game_;
}
void Screen::CLS() const 	//Очистка экрана
{
	system("cls"); // для винды
	/*system ("clear"); */	// включить для linux
}
void Screen::PrintScr(Gamefield &field, int y_, int x_, char object)		//Вывод игрового поля
{
	CLS();
	char border = '#';
	char unit = object;
	for (int j = 0; j < field.GetX() + 2; j++)
	{
		cout << border << " ";
	}
	cout << endl;
	for (int yi = 1; yi <= field.GetY(); yi++)
	{
		cout << border;
		if (y_ == yi)
		{
			for (int i = 1; i <= field.GetX() * 2; i++)
			{
				if (x_ * 2 == i)
				{
					cout << unit;
				}
				else
					cout << " ";
			}
			cout << " " << border << endl;
		}
		if (yi != y_)
		{
			for (int xi = 1; xi <= field.GetX() * 2; xi++)
			{
				cout << " ";
			}
			cout << " " << border << endl;
		}
	}
	for (int j = 0; j < field.GetX() + 2; j++)
	{
		cout << border << " ";
	}
	cout << endl;
}