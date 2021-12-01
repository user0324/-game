#include<iostream>				//���������� ������ �����������
#include<vector>
#include "Gamefield.h"
#include"Object.h"
using std::cout;
using std::endl;

Gamefield::Gamefield()			//����������� ����������� �� ���������
{
	this->axisX = 2;
	this->axisY = 2;
	Matrix.resize(axisX);
	for (int i = 0; i < Matrix.size(); i++) {
		Matrix[i].resize(axisY);
	}
	cout << "CLASSIC construktor class Gamefield" << endl;		//��� �������
}
Gamefield::Gamefield(unsigned Line, unsigned ColumnY)			//����������� ������ �����������
{
	axisX = Line > 2 ? Line : 2;
	axisY = ColumnY > 2 ? ColumnY : 2;
	Matrix.resize(axisX);		
	for (int i = 0; i < Matrix.size(); i++) {
		Matrix[i].resize(axisY);
	}
	cout << "Construktor class Gamefield" << endl;		//��� �������
}
Gamefield::Gamefield(const Gamefield& matrix_)		//����������� ����������� ������ ����� ��� � ������ ������ ������� � ���������� ����������� 
{
	Matrix = matrix_.Matrix;
	axisX = matrix_.GetAxisX();
	axisY = matrix_.GetAxisY();
	cout << "Clasic copy constructor class Gamefield" << endl;		//��� �������
}
Gamefield::~Gamefield()			//���������� ����� ����������� �������� � �������� ������� ������ ��� ������ � �����...
{
	cout << "Clasic destruktor ~Gamefield" << endl;		//��� �������
}
unsigned Gamefield::MaxControl()	const		//����������� ��������� ���-�� �������� �� ����
{
	unsigned Max = axisX * axisY;
	return Max;
}

void Gamefield::DefinitionField(std::vector<std::vector<Object*>> Field)		//������������� ������������
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
