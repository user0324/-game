//����������� ������ ��������� ������� ��� ���������� ������ �������� ������ 
#pragma once
#include "Warror.h"
class Defense :public Warror
{
	unsigned Attack;		//�����
	unsigned Health;		//��������
	unsigned Armour;		//�����
	unsigned id;			//��� �����
public:
	void InewWarType();		//���� � ��������� ������� ���� ������ ��� �����
};

