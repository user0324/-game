// ����������� ������ ����� ����� ���������� � ������� � ������� �������� ����� ������� ����
#pragma once
class Gamefield;
class Screen
{
	bool game;
public:
	Screen();		//����������� �����������
	void SetGame(bool);		//���������� �������� ������ �����
	void CLS()const;			//������� ������
	void PrintScr(Gamefield &, int y, int x, char );		//����� �������� ���� 
};