//����������� ������ �������� ��������� ������� 
#pragma once
#include "Factory.h"
class FactoryAttacking :public Factory
{
public:
	Warror* create();		//������� �������� ��������� ������� ������ ����
};

