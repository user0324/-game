#include<iostream>				//Реализация класса игровоеполе
#include<vector>
#include "Gamefield.h"
#include"Object.h"
using std::cout;
using std::endl;

Gamefield::Gamefield()			//Конструктор класса игровоеполе
{
	this->axisX = 2;
	this->axisY = 2;
	cout << "Clasic construktor class Gamefield" << endl;		//для отладки
}
Gamefield::Gamefield(const Gamefield& field)		//конструктор копирования просто чтобы был в данном классе хватает и побитового копирования 
{
	axisX = field.axisX;
	axisY = field.axisY;
	cout << "Clasic copy constructor class Gamefield" << endl;		//для отладки
}
Gamefield::~Gamefield()			//Деструктор класа игровоеполе удаленеи в обратном порядке потому что данные в стеке...
{
	cout << "Clasic destruktor ~Gamefield" << endl;		//для отладки
}
void Gamefield::SetAxisYX(int X_, int Y_)			//установить значение игровоеполе
{
	axisX = X_ >= 2 ? X_ : 2;
	axisY = Y_ >= 2 ? Y_ : 2;
}
int Gamefield::MaxControl()	const		//максимально возможное кол-во объектов на поле
{
	int Max = axisX * axisY;
	return Max;
}
void Gamefield::DefinitionField(std::vector<std::vector<Object*>> Field)		//инициализация игровогополя
{
	char enclosure = '#';
	cout << enclosure << " ";
	for (int i = 0; i < axisY; i++) {
		cout << enclosure << " ";
	}
	cout << enclosure << endl << enclosure << " ";
	for (std::vector<Object*> X : Field) {		
		for (Object* x : X) {
			std::cout << x->GetMapping() << ' ';
		}
		cout << enclosure << endl << enclosure << " ";
	}
	for (int i = 0; i < axisY; i++) {
		cout << enclosure << " ";
	}
	cout << enclosure << endl;
}
