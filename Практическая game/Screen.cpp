//���������� ������ �����
#include<iostream>
#include"Gamefield.h"
#include "Screen.h"
using std::cout;
using std::endl;
using std::cin;

Screen::Screen()		//������������ �����������
{
	this->game = true;
}
void Screen::CLS()const			//������� ������
{
	system("cls");		//��� windows
	/*system("clear");*/		//��� linux
}
int Screen::GoGamefield(Gamefield& a)		//������� �������� ����
{
	setlocale(LC_ALL, "Russian");
	int Y, X;
	cout << "������� ������� �����������:" << endl;
	while (true)
	{
		cout << "������� ���������� �����:" << endl;
		cin >> X;
		if (cin.fail())
		{
			cout << "��� ������ ���� �����" << endl;
			cin.clear();
			cin.ignore(32767, '\n');
			continue;
		}
		if (X < 2)
		{
			cout << " �������� ������ ���� ������ 2-�" << endl;
			continue;
		}
		if (X > 25)
		{
			cout << " ��������� �������� <� ��������� �� 2-25>" << endl;
			continue;
		}
		else break;
	}
	while (true)
	{
		cout << "������� ���������� ��������:" << endl;
		cin >> Y;
		if (cin.fail())
		{
			cout << "��� ������ ���� �����" << endl;
			cin.clear();
			cin.ignore(32767, '\n');
			continue;
		}
		if (Y < 2)
		{
			cout << " �������� ������ ���� ������ 2-�" << endl;
			continue;
		}
		if (Y > 25)
		{
			cout << " ��������� �������� <� ��������� �� 2-25>" << endl;
			continue;
		}
		else break;
	}
	a.SetAxisYX(X, Y);
	int SumObjectov = a.MaxControl();
	return SumObjectov;
}
