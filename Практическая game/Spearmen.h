//����������� ������ �������� ��� ���������� ������ �������� ������ 
#pragma once
#include "Warror.h"
class Spearmen :public Warror
{
	unsigned Attack;		//�����
	unsigned Health;		//��������
	unsigned Armour;		//�����
	unsigned id;			//��� �����
public:
	void InewWarType();		//���� � �������� ������ ���� ������ ��� �����
};

