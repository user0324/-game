// ����������� ������ ������ ������� ���� (1,1)
#pragma once
class Cell
{
	int x, y;	//���������� ������� ���� (1,1)
	char Z;		//����������� ����������� ������
	int GetX() { return x; }
	int GetY() { return y; }
	char GetZ() { return Z; }
public:
	Cell();
	void SetXYZ(int x, int y, char z);		//���������� �������� ������

};