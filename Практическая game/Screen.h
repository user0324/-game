#pragma once			// ����������� ������ �����
class Gamefield;
class Screen
{
	bool game;
public:
	Screen();		//������������ �����������
	void CLS()const;		//������� ������
	/*void PrintScreen()*/
	int GoGamefield(Gamefield&);		//������� �������� ����
};

