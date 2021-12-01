#include<iostream>				//Реализация класса игровоеполе
#include<vector>
#include "Gamefield.h"
#include"Object.h"
using std::cout;
using std::endl;

Gamefield::Gamefield()			//класический конструктор по умолчанию
{
	this->axisX = 2;
	this->axisY = 2;
	Matrix.resize(axisX);
	for (int i = 0; i < Matrix.size(); i++) {
		Matrix[i].resize(axisY);
	}
	cout << "CLASSIC construktor class Gamefield" << endl;		//для отладки
}
Gamefield::Gamefield(unsigned Line, unsigned ColumnY)			//Конструктор класса игровоеполе
{
	axisX = Line > 2 ? Line : 2;
	axisY = ColumnY > 2 ? ColumnY : 2;
	Matrix.resize(axisX);		
	for (int i = 0; i < Matrix.size(); i++) {
		Matrix[i].resize(axisY);
	}
	cout << "Construktor class Gamefield" << endl;		//для отладки
}
Gamefield::Gamefield(const Gamefield& matrix_)		//конструктор копирования просто чтобы был в данном классе хватает и побитового копирования 
{
	Matrix = matrix_.Matrix;
	axisX = matrix_.GetAxisX();
	axisY = matrix_.GetAxisY();
	cout << "Clasic copy constructor class Gamefield" << endl;		//для отладки
}
Gamefield::~Gamefield()			//Деструктор класа игровоеполе удаленеи в обратном порядке потому что данные в стеке...
{
	cout << "Clasic destruktor ~Gamefield" << endl;		//для отладки
}
unsigned Gamefield::MaxControl()	const		//максимально возможное кол-во объектов на поле
{
	unsigned Max = axisX * axisY;
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
