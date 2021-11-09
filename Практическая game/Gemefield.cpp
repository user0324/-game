// ���������� ������ �����������
#include<iostream>
#include"Gamefield.h"
#include"Object.h"
#include"Cell.h"
using std::cout;
using std::endl;

Gamefield::Gamefield()		//����������� ������ �����������
{
	this->x = x >= 2 ? x : 2;
	this->y = y >= 2 ? y : 2;
	cout << "Clasic Konstruktor";
	PrintXY();
}
Gamefield::~Gamefield()		//����������� ������ ����������� �������� � �������� ������� ������ ��� ������ � ����� ��........
{
	cout << "~Clasic Destruktor Gamefield";
	//��� �������
	PrintXY();
}
int Gamefield::SetOne(int x_)		//���������� � ��������� ���� ��������
{
	int X = x_ >= 1 ? x_ : 1;
	return X;
}
Gamefield::Gamefield(const Gamefield &other)		//����������� �����������
	: x(other.x), y(other.y) // c����� ������������� ����� ����������
{
	//x = other.x;
	//y = other.y;
	cout << "Clasic Konstr Copy";
	PrintXY();
}
Gamefield::Gamefield(int y_)		//���������� ��������������
{
	x = 1;
	y = SetOne(y_);
	cout << "Konstruktor transformation";
	PrintXY();

}
Gamefield::Gamefield(int x_, int y_)		//���������� ������������ ��������������� 3 � 1-� 
{
	//��� �������
	x = x_*2;
	y = y_;
	cout << "Parametric:"; PrintXY(); 
}
void Gamefield::PrintXY()		//����� �������� ����
{
	cout << " Gamefield(" << ")=(x" << GetX() << ",y" << GetY() << ");" << endl;
}
void Gamefield::SetXY(int _x, int y)  //��������� �������� ������������
{
	x = _x >= 2 ? _x : 2;			//�������� �������� ������ 2 
	this->y = y >= 2 ? y : 2;		//��������� ��� ������������ ������ �����
}
int Gamefield::MaxControl()		//�������� max ���-�� �������� �� ����
{
	int z = x * y;
	return z;
}




