//����������� ������ ������� ��� ���������� ������ �������� ������ 
#pragma once
#include "Warror.h"
class Sniper :public Warror
{
	unsigned Attack;		//�����
	unsigned Health;		//��������
	unsigned Armour;		//�����
	unsigned id;			//��� �����
public:
	void InewWarType();		//���� � �������� ������ ���� ������ ��� �����
};

