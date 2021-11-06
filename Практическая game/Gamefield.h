// ����������� ������ �����������
#pragma once
class Cell;
class Gamefield   // Class gamefield
{
	/*friend*/
public:
	Gamefield();
	explicit Gamefield(int);			//����������� ��������������
	Gamefield(int, int);		//��������������� �����������
	~Gamefield();
	Gamefield(const Gamefield &);
	
	void PrintXY();		//����� �������� ����
	void SetXY(int x, int y);	//���������� �������� ������������
	int SetOne(int);		//���������� ���� ��������
	void CLS();			//������� ������
	int  MaxControl();	//�������� max ���-�� �������� �� ����
	void Print(int a, int b, char z, bool game);	//����� �������� ����
	
private:
	int x, y;		//������ � ����� ������������
	int  GetX() { return x; } // inline �� ���������
	int  GetY();
};
inline int Gamefield::GetY() { return y; }

