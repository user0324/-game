//���������� ���
#include<iostream>
#include<vector>
#include<conio.h>
#include"Gamefield.h"
#include"Object.h"
#include"Screen.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{
	Screen a;			//�������� ������� � �����
	Gamefield b;		//�������� ������� � �����
	int SumObjectov = a.GoGamefield(b);

	cout << endl << SumObjectov << endl;		//��� �������
	Object c;			//�������� ������� � �����
	std::vector<std::vector<Object*>> a1;		//�������� ������� � ����
	a1 = c.CreatingObject(b);
	b.DefinitionField(a1);
}