#include<iostream>				//���������� ������ �����������
#include<vector>
#include<conio.h>
#include "Gamefield.h"
#include"Object.h"
#include"Unit.h"
using std::cout;
using std::endl;

Gamefield::Gamefield()			//����������� ����������� �� ���������
{
	this->axisX = 2;
	this->axisY = 2;
	Matrix.resize(axisX);
	for (int i = 0; i < Matrix.size(); i++) {
		Matrix[i].resize(axisY);
	}
	cout << "CLASSIC construktor class Gamefield" << endl;		//��� �������
}
Gamefield::Gamefield(unsigned Line, unsigned ColumnY)			//����������� ������ �����������
{
	axisX = Line > 2 ? Line : 2;
	axisY = ColumnY > 2 ? ColumnY : 2;
	Matrix.resize(axisX);		
	for (int i = 0; i < Matrix.size(); i++) {
		Matrix[i].resize(axisY);
	}
	cout << "Construktor class Gamefield" << endl;		//��� �������
}
Gamefield::Gamefield(const Gamefield& matrix_)		//����������� ����������� ������ ����� ��� � ������ ������ ������� � ���������� ����������� 
{
	Matrix = matrix_.Matrix;
	axisX = matrix_.GetAxisX();
	axisY = matrix_.GetAxisY();
	cout << "Clasic copy constructor class Gamefield" << endl;		//��� �������
}
Gamefield::~Gamefield()			//���������� ����� ����������� �������� � �������� ������� ������ ��� ������ � �����...
{
	cout << "Clasic destruktor ~Gamefield" << endl;		//��� �������
}
unsigned Gamefield::MaxControl()	const		//����������� ��������� ���-�� �������� �� ����
{
	unsigned Max = axisX * axisY;
	return Max;
}
void Gamefield::DefinitionField(std::vector<std::vector<Object*>> Field)		//������������� ������������
{
	char enclosure = '#';
	cout << enclosure << " ";
	for (int i = 0; i < axisY; i++) {
		cout << enclosure << " ";
	}
	cout << enclosure << endl << enclosure << " ";
	for (std::vector<Object*> X : Field) {		
		for (Object* x : X) {
			std::cout << x->GetMapping() << ' ';
		}
		cout << enclosure << endl << enclosure << " ";
	}
	for (int i = 0; i < axisY; i++) {
		cout << enclosure << " ";
	}
	cout << enclosure << endl;
}
void Gamefield::MoveUnit(std::vector<std::vector<Object*>> Game, Unit& u)		//�������� ����� (������) �� ���� � ���������
{
	Object tmp;
	Unit HeroU;
	std::vector<std::vector<Object*> >testDel, testHero;
	DefinitionField(Game);
	while (true)
	{
		HeroU = u;
		const unsigned X = HeroU.GetDotX();
		const unsigned Y = HeroU.GetDotY();
		if (!_kbhit()) {		//������� _kbhit() ���������� �������� false, ���� �� ���������� �� ������ ������� �������, � �������� true, ���� ������� ���� ������ 
			switch ( _getch())		//������� _getch(), ������� ������� ������� ������� �� ���������� � ���������� ������ ���� ������� ��� ����������� ����� ������� ��  ������ 
			{
			case 'a':
				if (u.GetDotY() != 0)		//Y-1
				{
					u.SetY(u.GetDotY() - 1);
				}
				break;
			case 'd':
				if (u.GetDotY() != axisY-1)	//Y+1
				{
					u.SetY(u.GetDotY() + 1);
				}
				break;
			case 'w':
				if (u.GetDotX() != 0)		//X-1
				{
					u.SetX(u.GetDotX() - 1);
				}
				break;
			case 's':
				if (u.GetDotX() != axisX-1)	//X+1
				{
					u.SetX(u.GetDotX() + 1);
				}
				break;
			case 'p':
				return;
				break;
			}
			
		}
		testDel = tmp.DelObject(Game, X, Y);
		testHero = tmp.SetUnitObject(testDel, u);
		/*system("cls");*/
		DefinitionField(testHero);
	}
}
