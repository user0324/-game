#pragma once
#include "Cell.h"
class Object :
	public Cell
{
	struct ObjectXYZ		//�������� �������
	{
		int x;		//���������� ������� �� ���� �� ��� �
		int y;		//���������� ������� �� ���� �� ��� Y
		char Z;		//����������� ����������� �������
	}ObXYZ;
	struct DataXYZ		//��������� ��� �������� ������ � ��������
	{
		ObjectXYZ z;
		DataXYZ *next;		//C����� �������� ����� �� ��������� �������
		DataXYZ *prev;		//������ �������� ����� �� ���������� �������
	}listok;
	int num;		//��������� ���-�� ��������
public:
	
};

