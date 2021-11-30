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
	std::vector<std::vector<Object*>> SetObject(Gamefield&);				//������� ����� �������� � �������� ����������� �������� �������� ����
	std::vector<std::vector<Object*>> CreatingObject(Gamefield&);				//������������� �������� �������� �������� ����
	
};

