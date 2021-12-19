#pragma once				//����������� ������ �����������
#include<vector>
class Object;
class Unit;
class Gamefield
{
	unsigned axisX, axisY;	//��� ������������
    std::vector<std::vector<Object> > Matrix;			//����������� �������� ������ ��� ������ 
public:
	friend class Iterator;			
	Gamefield();			//����������� ����������� �� ���������
	Gamefield(unsigned Line, unsigned ColumnY);		//����������� ����������� ������������
	~Gamefield();		//����������� ����������
	Gamefield(const Gamefield&);		//����������� ����������� ������ ����� ��� � ������ ������ ������� � ���������� ����������� 
	unsigned GetAxisX() const { return axisX; }		//inline �������� �������� ��� � ������
	unsigned GetAxisY() const;			//�������� �������� ��� Y �������
	unsigned MaxControl() const;			//����������� ��������� ���-�� �������� �� ����
	void DefinitionField(std::vector<std::vector<Object*>> Field);		//������������� ����	
	void MoveUnit(std::vector<std::vector<Object*> > Game, Unit&);		//�������� ����� (������) �� ���� � ���������
};
inline unsigned Gamefield::GetAxisY() const { return axisY; }		//�������� �������� ��� Y
