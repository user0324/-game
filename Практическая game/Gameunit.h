// ����������� ������ Unit
#pragma once
class Gameunit		//Class Unit
{
	char* n;		//���-�� ������
	int x, y;		//���������� ������

	friend class Gamefield;
public:
   Gameunit(const char * str ="");		//�����������
 /*~Gameunit();*/

};


/*Game�unit::~Gamefield()		//����������� ������ ����
{

}*/
