//���������� ������ �����
#include<iostream>	
#include<vector>
#include"Object.h"
#include "Unit.h"

using std::cout;
using std::endl;
Unit::Unit()		//����������� �� ���������
{
	this->SetX(0);
	this->SetY(1);
	this->SetM('U');
	this->sumArmour = 30;
	this->sumAttack = 12;
	this->sumHealth = 12;
	this->Quantity = 6;
	/*cout << "Clasic construktor class Unit" << endl;*/
}
void Unit::SetsumArmour(int A)		//������ �������� ����� ������
{
	this->sumArmour = A;
}
void Unit::SetsumHealth(int H)		//������ �������� �������� ������
{
	this->sumHealth = H;
}
void Unit::SetsumAttack(int A)		//������ �������� ����� ������
{
	this->sumAttack = A;
}
void Unit::SetsumQuantity(unsigned Q)		//������ ���-�� ������ ������
{
	this->Quantity = Q;
}