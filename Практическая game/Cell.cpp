// ���������� ������ ������  ������� ���� (1,1)
#include<iostream>
#include"Gamefield.h"
#include"Cell.h"
using std::cout;
using std::endl;
using std::cin;

Cell::Cell()		//����������� ������ ������
{
	this->x = x >= 1 ? x : 1;
	this->y = y >= 1 ? y : 1;
	this->Z = '@';
}
void Cell::SetXYZ(int x, int y, char z)		//���������� �������� ������
{
	this->x = x >= 1 ? x : 1;
	this->y = y >= 1 ? y : 1;
	this->Z = z;
}
