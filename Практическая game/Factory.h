//����������� ������ ������� ��� ���������� ������ �������� ������ (����������� ������������ ����� �������
#pragma once
class Warror;
class Factory
{
public:
	virtual Warror* create() = 0;		//������������������ �������� ����� ������ ����
	virtual ~Factory() {};
};

