#pragma once			//����������� ������ ������
#include<vector>
class Gamefield;
class Object
{
	int dotX, dotY;
	char mapping;
public:
	Object();			//������������ �����������
	~Object();			//������������ ����������
	int GetDotX() const { return dotX; }		//�������� ���������� ������� � ����� �
	int GetDotY() const { return dotY; }		//�������� ���������� ������� � ����� Y
	char GetMapping() const { return mapping; }			//�������� ����������� ����������� �������
	void SetObject(int, int, char);				//������ 1 ������
	std::vector<Object*> CreatingObject(int, Gamefield&);				//������������� �������� �������� �������� ����
};

