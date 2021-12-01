#include<iostream>			//���������� ������ ������
#include<vector>
#include "Object.h"
#include"Gamefield.h"
#include"Unit.h"

using std::cout;
using std::endl;
using std::cin;

Object::Object()			//������������ ����������� ������ ������
{
	this->dotX = 1;
	dotY = 1;
	mapping = '$';
	/*cout << "Clasic construktor class Object" << endl;		//��� �������*/
}
Object::~Object()		//������������ ���������� ������ ������ �������� � �������� �������
{
	/*cout << "Clasic destruktor ~Object" << endl;		//��� �������*/
}
void Object::SetX(unsigned X)		//������ �������� ����� �� ��� X
{
	this->dotX = X;
}
void Object::SetY(unsigned Y)		//������ �������� ����� �� ��� Y
{
	this->dotY = Y;
}
void Object::SetM(char M)		//������ ����������� ����������� �������
{
	this->mapping = M;
}
std::vector<std::vector<Object*> >Object::Forma(Gamefield& b)		//�������� ������� �������� ��������� ����
{
	std::vector<std::vector<Object*>>SumObject;		//���������� ���������� ������ ��������
	SumObject.resize(b.GetAxisX());					//������� ������� �� ��� � �������
	for (int i = 0; i < SumObject.size(); i++) {
		SumObject[i].resize(b.GetAxisY());			//������� ������� �� ��� Y ������
	}			//������� ������� ���� ������
	for (int i = 0; i < b.GetAxisX(); i++) {		//� ������ �������� ������� ������� XY ��������� �������������
		for (int j = 0; j < b.GetAxisY(); j++) {
			SumObject[i][j] = new Object();
		}
	}
	return SumObject;
}
std::vector<std::vector<Object*>>Object::SetConsolObject(Gamefield& b)		//������� ����� �������� � �������� ����������� �������� �������� ����
{
	setlocale(LC_ALL, "Russian");
	cout << "����������� ��������� ���-�� �������� �� ����: " << "(" << b.MaxControl() << ")" << endl;
	cout << "������� ���-�� ��������, ������� ��������� �������:";
	unsigned kol;
	while (true)
	{
		cin >> kol;
		if (cin.fail())
		{
			cout << "��������� ������ �� ���������. ��������� ����" << endl;
			cin.clear();
			cin.ignore(32767, '\n');
			continue;
		}
		if (kol < 1 || kol > b.MaxControl())
		{
			cout << "�������� <� ��������� �� 1 �� " << b.MaxControl() << ">" << endl;
			continue;
		}
		else break;
	}
	char View = '@';			//����������� ������� ���� ��� �������  const
	unsigned LineX, ColumnY;
	std::vector<Object>SetXY(kol); //���������� �� ���� 
	for (int i = 0; i < SetXY.size(); i++) {
		while (true)
		{
			cout << "������� ���������� �� ��� � (������)." << endl;
			cin >> LineX;
			if (cin.fail())
			{
				cout << "��������� ������ �� ���������. ��������� ����" << endl;
				cin.clear();
				cin.ignore(32767, '\n');
				continue;
			}
			if (LineX < 1 || LineX >b.GetAxisX())
			{
				cout << "�������� <� ��������� �� 1 �� " << b.GetAxisX() << ">" << endl;
				continue;
			}
			else break;
		}
		SetXY[i].dotX = LineX - 1;
		while (true)
		{
			cout << "������� ���������� �� ��� Y (�������)." << endl;
			cin >> ColumnY;
			if (cin.fail())
			{
				cout << "��������� ������ �� ���������. ��������� ����" << endl;
				cin.clear();
				cin.ignore(32767, '\n');
				continue;
			}
			if (ColumnY < 1 || ColumnY >b.GetAxisY())
			{
				cout << "�������� <� ��������� �� 1 �� " << b.GetAxisY() << ">" << endl;
				continue;
			}
			else break;
		}
		SetXY[i].dotY = ColumnY - 1;
		SetXY[i].mapping = View;
	}
	std::vector<std::vector<Object*> > SumObject = Forma(b);
	for (Object& x : SetXY) {
		SumObject[x.GetDotX()][x.GetDotY()]->mapping = x.GetMapping();
	}
	return SumObject;
}
std::vector<std::vector<Object*>> Object::SetOneObject(std::vector<std::vector<Object*> >One, Gamefield& b, unsigned X, unsigned Y, char mapp)	//������� ������ ������ (���������� � ���) "��������"
{
	One[X][Y]->mapping = mapp;
	return One;
}
std::vector<std::vector<Object*>> Object::SetUnitObject(std::vector<std::vector<Object*> > one, Gamefield& b, Unit& u)			//add Unita
{
	one[u.GetDotX()][u.GetDotY()]->mapping = u.GetMapping();
	return one;
}
