#pragma once	//����������� ������ ����
#include<vector>
#include"Object.h"

class Unit :public Object
{
	unsigned sumArmour;		//�����
	unsigned sumHealth;		//��������
	unsigned sumAttack;		//�����
	unsigned Quantity;		//����� ������ ������
public:
	Unit();		//����������� �� ���������
	unsigned GetsumArmour() const { return sumArmour; }			//�������� �������� ����� ������
	unsigned GetsumHealth() const { return sumHealth; }			//�������� �������� �������� ������
	unsigned GetsumAttack() const { return sumAttack; }			//�������� �������� ����� ������
	unsigned GetQuantity() const { return Quantity; }			//�������� ���-�� ������ ������
	void SetsumArmour(int);		//������ �������� ����� ������
	void SetsumHealth(int);		//������ �������� �������� ������
	void SetsumAttack(int);		//������ �������� ����� ������
	void SetsumQuantity(unsigned);		//������ ���-�� ������ ������
};

