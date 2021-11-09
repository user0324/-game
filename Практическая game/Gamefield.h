// ����������� ������ �����������
#pragma once

class Gamefield   // Class gamefield
{ 
public:
	Gamefield();
	explicit Gamefield(int);			//����������� ��������������
	Gamefield(int, int);		//��������������� �����������
	~Gamefield();
	Gamefield(const Gamefield &);
	int  GetX() const { return x; } // inline �� ���������
	int  GetY() const;
	void PrintXY();		//����� �������� ����
	void SetXY(int x, int y);	//���������� �������� ������������
	int SetOne(int);		//���������� ���� ��������
	int  MaxControl();	//�������� max ���-�� �������� �� ����
	
private:
	int x, y;		//������ � ����� ������������
};
inline int Gamefield::GetY() const { return y; }

