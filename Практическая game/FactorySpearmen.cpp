//���������� ������ ������� �������� ������
#include<iostream>
#include "FactorySpearmen.h"
#include"Warror.h"
#include"Spearmen.h"

Warror* FactorySpearmen::create()	//������� �������� ��������� ������ ������ ����
{
	return new Spearmen;
}
