//���������� ������ ������� ��������� �������
#include<iostream>
#include"FactoryAttacking.h"
#include"Warror.h"
#include"Attacking.h"

Warror* FactoryAttacking::create()	// ������� �������� ��������� ������� ������ ����
{
	return new Attacking;
}