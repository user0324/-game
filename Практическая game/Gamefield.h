#pragma once				//����������� ������ �����������
#include<vector>
class Object;
class Gamefield
{
	int axisX, axisY;	//��� ������������
public:
	Gamefield();		//����������� �����������
	~Gamefield();		//����������� ����������
	int GetAxisX() const { return axisX; }		//inline �������� �������� ��� �
	int GetAxisY() const;			//�������� �������� ��� Y
	void SetAxisYX(int, int);		//���������� �������� �����������
	int MaxControl() const;			//����������� ��������� ���-�� �������� �� ����
	void DefinitionField(std::vector<std::vector<Object*>> Field);		//������������� ����	
	
};
inline int Gamefield::GetAxisY() const { return axisY; }		//�������� �������� ��� Y
