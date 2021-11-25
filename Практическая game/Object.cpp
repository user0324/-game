#include<iostream>			//���������� ������ ������
#include<vector>
#include "Object.h"
#include"Gamefield.h"
using std::cout;
using std::endl;

Object::Object()			//������������ ����������� ������ ������
{
	this->dotX = 1;
	dotY = 1;
	mapping = '$';
	cout << "Clasic konstruktor class Object" << endl;
}
Object::~Object()		//������������ ���������� ������ ������ �������� � �������� �������
{
	cout << "Clasic destruktor ~Object" << endl;		//��� �������
}
void Object::SetObject(int X, int Y, char M)		//������� 1 �������
{
	dotX = X >= 1 ? X : 1;
	dotY = Y >= 1 ? Y : 1;
	mapping = M;
}
std::vector<Object*> Object::CreatingObject(int Sum, Gamefield& b)				//������������� �������� �������� �������� ����
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