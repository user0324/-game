//����������� ������ c��������� ������ (������) ��� ���������� ������ �������� ������ 
#pragma once
#include "Warror.h"
class Speed :public Warror
{
	unsigned Attack;		//�����
	unsigned Health;		//��������
	unsigned Armour;		//�����
	unsigned id;			//��� �����
public:
	void InewWarType();		//���� � ���������� ������� ������ ���� ������ ��� �����
};

