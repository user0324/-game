#include<iostream>				//���������� ������ �����������
#include<vector>
#include "Gamefield.h"
#include"Object.h"
using std::cout;
using std::endl;

Gamefield::Gamefield()			//����������� ������ �����������
{
	this->axisX = 2;
	this->axisY = 2;
	cout << "Clasic konstruktor class Gamefield" << endl;		//��� �������
}
Gamefield::~Gamefield()			//���������� ����� ����������� �������� � �������� ������� ������ ��� ������ � �����...
{
	cout << "Clasic destruktor ~Gamefield" << endl;		//��� �������
}
void Gamefield::SetAxisYX(int X_, int Y_)			//���������� �������� �����������
{
	axisX = X_ >= 2 ? X_ : 2;
	axisY = Y_ >= 2 ? Y_ : 2;
}
int Gamefield::MaxControl()	const		//����������� ��������� ���-�� �������� �� ����
{
	int Max = axisX * axisY;
	return Max;
}
void Gamefield::DefinitionField(std::vector<std::vector<Object*>> Field)		//������������� ������������
{
	Field.resize(axisX);
	for (int i = 0; i < Field.size(); i++) {
		Field[i].resize(axisY);
	}
	for (std::vector<Object*> X : Field) {
		for (Object* x : X) {
			std::cout << x->GetMapping() << ' ';
		}
		cout << endl;
	}
}
