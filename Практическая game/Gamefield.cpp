#include<iostream>				//–еализаци€ класса игровоеполе
#include<vector>
#include "Gamefield.h"
#include"Object.h"
using std::cout;
using std::endl;

Gamefield::Gamefield()			// онструктор класса игровоеполе
{
	this->axisX = 2;
	this->axisY = 2;
	cout << "Clasic konstruktor class Gamefield" << endl;		//дл€ отладки
}
Gamefield::~Gamefield()			//ƒеструктор класа игровоеполе удаленеи в обратном пор€дке потому что данные в стеке...
{
	cout << "Clasic destruktor ~Gamefield" << endl;		//дл€ отладки
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
void Gamefield::DefinitionField(std::vector<std::vector<Object*>> Field)		//инициализаци€ игровогопол€
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
