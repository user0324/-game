//���������� ������ ������� ������� ������
#include<iostream>
#include "FactorySniper.h"
#include"Warror.h"
#include"Sniper.h"

Warror* FactorySniper::create()	// ������� �������� ������� ������ ������ ����
{
	return new Sniper;
}
