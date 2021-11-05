// Реализация класса игровоеполе
#include<iostream>
#include"Gamefield.h"
using std::cout;
using std::endl;

Gamefield::Gamefield()		//Конструктор класса игровоеполе
{
	this->x = x >= 2 ? x : 2;
	this->y = y >= 2 ? y : 2;
	cout << "Clasic Konstruktor";
	PrintXY();
}
Gamefield::~Gamefield()		//Деструкторы класса игровоеполе удаление в обратном порядке потому что данные в стеке Но........
{
	cout << "~Clasic Destruktor";
	//для отладки
	PrintXY();
}
int Gamefield::SetOne(int x_)		//Установить и проверить Одно значение
{
	int X = x_ >= 1 ? x_ : 1;
	return X;
}
Gamefield::Gamefield(const Gamefield &other)		//Конструктор копирования
	: x(other.x), y(other.y) // cписок инициализации более эффективен
{
	//x = other.x;
	//y = other.y;
	cout << "Clasic Konstr Copy";
	PrintXY();
}
Gamefield::Gamefield(int y_)		//Коструктор преобразования
{
	x = 1;
	y = SetOne(y_);
	cout << "Konstruktor transformation";
	PrintXY();

}
Gamefield::Gamefield(int x_, int y_)		//Перегрузка конструктора параметрический 3 в 1-м 
{
	//для отладки
	x = x_*2;
	y = y_;
	cout << "Parametric:"; PrintXY(); 
}
void Gamefield::PrintXY()		//Вывод значений поля
{
	cout << " Gamefield(" << ")=(x" << GetX() << ",y" << GetY() << ");" << endl;
}
void Gamefield::SetXY(int _x, int y)  //Установка значение игровогополя
{
	x = _x >= 2 ? _x : 2;			//Проверка значения больше 2 
	this->y = y >= 2 ? y : 2;		//Спецально для разнообразия другой метод
}
void Gamefield::CLS()		//Очистка экрана
{
	system("cls");
}
int Gamefield::MaxControl()		//Контроль max кол-ва объектов на поле
{
	int z = x * y;
	return z;
}
void Gamefield::Print(int x_, int y_, char z)		//Вывод игрового поля
{
	CLS();
	char border = '#';
	char unit = z;
	for (int j = 0; j < this->x + 2; j++)
	{
		cout << border << " ";
	}
	cout << endl;
	for (int yi = 1; yi <= this->y; yi++)
	{
		cout << border;
		if (y_ == yi)
		{
			for (int i = 1; i <= this->x * 2; i++)
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
			for (int xi = 1; xi <= this->x * 2; xi++)
			{
				cout << " ";
			}
			cout << " " << border << endl;
		}
	}
	for (int j = 0; j < this->x + 2; j++)
	{
		cout << border << " ";
	}
	cout << endl;
}



