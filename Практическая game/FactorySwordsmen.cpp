//���������� ������ ������� ������ ������
#include<iostream>
#include "FactorySwordsmen.h"
#include"Warror.h"
#include"Swordsmen.h"


Warror* FactorySwordsmen::create()	//������� �������� ������ ������ ������ ����
{
	return new Swordsmen;
}