#include<iostream>			//Реализация класса объект
#include<vector>
#include "Object.h"
#include"Gamefield.h"
using std::cout;
using std::endl;

Object::Object()			//классический конструктор класса объект
{
	this->dotX = 1;
	dotY = 1;
	mapping = '$';
	cout << "Clasic konstruktor class Object" << endl;
}
Object::~Object()		//классический деструктор класса объект удаление в обратном порядке
{
	cout << "Clasic destruktor ~Object" << endl;		//для отладки
}
void Object::SetObject(int X, int Y, char M)		//задание 1 объекта
{
	dotX = X >= 1 ? X : 1;
	dotY = Y >= 1 ? Y : 1;
	mapping = M;
}
std::vector<Object*> Object::CreatingObject(int Sum, Gamefield& b)				//Инициализация объектов согласно размерам поля
{
	std::vector<Object*>SumObject(Sum);
	for (int i = 0; i < SumObject.size(); i++) {
		SumObject[i] = new Object();
	}
	
	for (Object* x : SumObject) {
			cout << x->GetMapping() << " ";	
	}
	cout << endl;
	cout << b.GetAxisX() << "GetAxisX" << endl;
	cout << b.GetAxisY() << "GetAxisY" << endl;
	return SumObject;
}