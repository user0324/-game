//����������� ������ �������� ��������� �������
#pragma once
#include "Factory.h"
class FactoryDefense :public Factory
{
public:
	Warror* create();		//������� �������� ��������� ������� ������ ����
};

