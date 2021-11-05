// ���������� ������ �����������
#include<iostream>
#include"Gamefield.h"
using std::cout;
using std::endl;

Gamefield::Gamefield()		//����������� ������ �����������
{
	this->x = x >= 2 ? x : 2;
	this->y = y >= 2 ? y : 2;
	cout << "Clasic Konstruktor";
	PrintXY();
}
Gamefield::~Gamefield()		//����������� ������ ����������� �������� � �������� ������� ������ ��� ������ � ����� ��........
{
	cout << "~Clasic Destruktor";
	//��� �������
	PrintXY();
}
int Gamefield::SetOne(int x_)		//���������� � ��������� ���� ��������
{
	int X = x_ >= 1 ? x_ : 1;
	return X;
}
Gamefield::Gamefield(const Gamefield &other)		//����������� �����������
	: x(other.x), y(other.y) // c����� ������������� ����� ����������
{
	//x = other.x;
	//y = other.y;
	cout << "Clasic Konstr Copy";
	PrintXY();
}
Gamefield::Gamefield(int y_)		//���������� ��������������
{
	x = 1;
	y = SetOne(y_);
	cout << "Konstruktor transformation";
	PrintXY();

}
Gamefield::Gamefield(int x_, int y_)		//���������� ������������ ��������������� 3 � 1-� 
{
	//��� �������
	x = x_*2;
	y = y_;
	cout << "Parametric:"; PrintXY(); 
}
void Gamefield::PrintXY()		//����� �������� ����
{
	cout << " Gamefield(" << ")=(x" << GetX() << ",y" << GetY() << ");" << endl;
}
void Gamefield::SetXY(int _x, int y)  //��������� �������� ������������
{
	x = _x >= 2 ? _x : 2;			//�������� �������� ������ 2 
	this->y = y >= 2 ? y : 2;		//��������� ��� ������������ ������ �����
}
void Gamefield::CLS()		//������� ������
{
	system("cls");
}
int Gamefield::MaxControl()		//�������� max ���-�� �������� �� ����
{
	int z = x * y;
	return z;
}
void Gamefield::Print(int x_, int y_, char z)		//����� �������� ����
{
	CLS();
	char border = '#';
	char unit = z;
	for (int j = 0; j < this->x + 2; j++)
	{
		cout << border << " ";
	}
	cout << endl;
	for (int yi = 1; yi <= this->y; yi++)
	{
		cout << border;
		if (y_ == yi)
		{
			for (int i = 1; i <= this->x * 2; i++)
			{
				if (x_ * 2 == i)
				{
					cout << unit;
				}
				else
				cout << " ";
			}
			cout << " " << border << endl;
		}
		if (yi != y_)
		{
			for (int xi = 1; xi <= this->x * 2; xi++)
			{
				cout << " ";
			}
			cout << " " << border << endl;
		}
	}
	for (int j = 0; j < this->x + 2; j++)
	{
		cout << border << " ";
	}
	cout << endl;
}



