//���������� ������ ������� ��������� �������
#include<iostream>
#include "FactoryDefense.h"
#include"Warror.h"
#include"Defense.h"

Warror* FactoryDefense::create()	// ������� �������� ��������� ������� ������ ����
{
	return new Defense;
}
