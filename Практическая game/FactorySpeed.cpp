//���������� ������ ������� c��������� ������ ������
#include<iostream>
#include "FactorySpeed.h"
#include"Warror.h"
#include"Speed.h"

Warror* FactorySpeed::create()	// ������� �������� c��������� ������ ������ ������ ����
{
	return new Speed;
}
