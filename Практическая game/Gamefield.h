#pragma once				//����������� ������ �����������
#include<vector>
class Object;
class Gamefield
{
	unsigned axisX, axisY;	//��� ������������
    std::vector<std::vector<Object> > Matrix;			//����������� �������� ������ ��� ������ 
public:
	Gamefield();			//����������� ����������� �� ���������
	Gamefield(unsigned Line, unsigned ColumnY);		//����������� ����������� ������������
	~Gamefield();		//����������� ����������
	Gamefield(const Gamefield&);		//����������� ����������� ������ ����� ��� � ������ ������ ������� � ���������� ����������� 
	unsigned GetAxisX() const { return axisX; }		//inline �������� �������� ��� � ������
	unsigned GetAxisY() const;			//�������� �������� ��� Y �������
	unsigned MaxControl() const;			//����������� ��������� ���-�� �������� �� ����
	void DefinitionField(std::vector<std::vector<Object*>> Field);		//������������� ����	
	
};
inline unsigned Gamefield::GetAxisY() const { return axisY; }		//�������� �������� ��� Y
