// Реализация класса игровоеполе
#include<iostream>
#include"Gamefield.h"
#include"Object.h"
#include"Cell.h"
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
	cout << "~Clasic Destruktor Gamefield";
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
int Gamefield::MaxControl()		//Контроль max кол-ва объектов на поле
{
	int z = x * y;
	return z;
}




