#pragma once			//����������� ������ ������
#include<vector>
class Gamefield;
class Unit;
class Object
{
	unsigned dotX, dotY;
	char mapping;
public:
	Object();			//������������ ����������� ��� 1-�� ������� ����� ���
	~Object();			//������������ ����������
	void SetX(unsigned);		//������ �������� ����� �� ��� X
	void SetY(unsigned);		//������ �������� ����� �� ��� Y
	void SetM(char);		//������ ����������� ����������� �������
	unsigned GetDotX() const { return dotX; }		//�������� ���������� ������� � ����� � ������
	unsigned GetDotY() const { return dotY; }		//�������� ���������� ������� � ����� Y �������
	char GetMapping() const { return mapping; }			//�������� ����������� ����������� �������	
	std::vector<std::vector<Object*> >Forma(Gamefield&);		//�������� ������� �������� ��������� ����
	std::vector<std::vector<Object*> > SetConsolObject(Gamefield &);				//������� ����� �������� � �������� ����������� �������� �������� ����
	std::vector<std::vector<Object*> > SetOneObject(std::vector<std::vector<Object*> >, Gamefield&, unsigned, unsigned, char);				//������� ������ ������ (���������� � ���) add
	std::vector<std::vector<Object*>> SetUnitObject(std::vector<std::vector<Object*> >, Unit&);				//add Unita
	std::vector<std::vector<Object*> > DelObject(std::vector<std::vector<Object*> >, const unsigned, const unsigned);		//delete Object
};

