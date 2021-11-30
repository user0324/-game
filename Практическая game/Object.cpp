#include<iostream>			//���������� ������ ������
#include<vector>
#include<algorithm>
#include "Object.h"
#include"Gamefield.h"
using std::cout;
using std::endl;
using std::cin;

Object::Object()			//������������ ����������� ������ ������
{
	this->dotX = 1;
	dotY = 1;
	mapping = '$';
	cout << "Clasic �onstruktor class Object" << endl;
}
Object::~Object()		//������������ ���������� ������ ������ �������� � �������� �������
{
	cout << "Clasic destruktor ~Object" << endl;		//��� �������
}
std::vector<std::vector<Object*>>Object::SetObject(Gamefield& b)		//������� ����� �������� � �������� ����������� �������� �������� ����
{
	setlocale(LC_ALL, "Russian");
	cout << "����������� ��������� ���-�� �������� �� ����: " << "(" << b.MaxControl() << ")" << endl;
	cout << "������� ���-�� ��������, ������� ��������� �������:";
	int kol;
	while (true)
	{
		cin >> kol;
		if (cin.fail())
		{
			cout << "��������� ������ �� ���������. ��������� ����" << endl;
			cin.clear();
			cin.ignore(32767, '\n');
			continue;
		}
		if (kol < 1 || kol > b.MaxControl())
		{
			cout << "�������� <� ��������� �� 1 �� " << b.MaxControl() << ">" << endl;
			continue;
		}
		else break;
	}
	char View = '@';			//����������� ������� ���� ��� �������  const
	int LineX, ColumnY;
	std::vector<Object>SetXY(kol); //���������� �� ���� 
	for (int i = 0; i < SetXY.size(); i++) {
		while (true)
		{
			cout << "������� ���������� �� ��� � (������)." << endl;
			cin >> LineX;
			if (cin.fail())
			{
				cout << "��������� ������ �� ���������. ��������� ����" << endl;
				cin.clear();
				cin.ignore(32767, '\n');
				continue;
			}
			if (LineX < 1 || LineX >b.GetAxisX())
			{
				cout << "�������� <� ��������� �� 1 �� " << b.GetAxisX() << ">" << endl;
				continue;
			}
			else break;
		}
		SetXY[i].dotX = LineX - 1;
		while (true)
		{
			cout << "������� ���������� �� ��� Y (�������)." << endl;
			cin >> ColumnY;
			if (cin.fail())
			{
				cout << "��������� ������ �� ���������. ��������� ����" << endl;
				cin.clear();
				cin.ignore(32767, '\n');
				continue;
			}
			if (ColumnY < 1 || ColumnY >b.GetAxisY())
			{
				cout << "�������� <� ��������� �� 1 �� " << b.GetAxisY() << ">" << endl;
				continue;
			}
			else break;
		}
		SetXY[i].dotY = ColumnY - 1;
		SetXY[i].mapping = View;
	}
	/*std::sort(SetXY.begin(), SetXY.end(), [](const Object& lhs, const Object& rhs)		//��������� �� ��������� ���� �� 
	{
		return lhs.GetDotX() < rhs.GetDotX();										//��� ��� ���� ������������ ����� �������� ��������� 
	});
	for (Object& x : SetXY) {						//��� �������
			cout << x.GetMapping() << " ";			// ������� ��������
			cout << x.GetDotY() << " ";				//����� ��� ��������
			cout << x.GetDotX() << " ";
		cout << endl;							//����������
	}*/
	std::vector<std::vector<Object*>>SumObjectv;		//���������� ���������� ������ ��������
	SumObjectv.resize(b.GetAxisX());					//������� ������� �� ��� � ������
	for (int i = 0; i < SumObjectv.size(); i++) {
		SumObjectv[i].resize(b.GetAxisY());			//������� ������� �� ��� Y �������
	}			//������� ������� ���� ������
	for (int i = 0; i < b.GetAxisX(); i++) {		
		for (int j = 0; j < b.GetAxisY(); j++) {
			SumObjectv[i][j] = new Object();		//� ������ �������� ������� ������� XY ��������� ������������ ������
		}
	}
	for (Object& x : SetXY) {
		SumObjectv[x.GetDotX()][x.GetDotY()]->mapping = x.GetMapping();
	}
	return SumObjectv;
}
std::vector<std::vector<Object*>> Object::CreatingObject(Gamefield& b)				//������������� �������� �������� �������� ����
{
	std::vector<std::vector<Object*>>SumObject;		//���������� ���������� ������ ��������
	SumObject.resize(b.GetAxisX());					//������� ������� �� ��� � �������
	for (int i = 0; i < SumObject.size(); i++) {
		SumObject[i].resize(b.GetAxisY());			//������� ������� �� ��� Y ������
	}			//������� ������� ���� ������
	for (int i = 0; i < b.GetAxisX(); i++) {		//� ������ �������� ������� ������� XY ��������� �������������
		for (int j = 0; j < b.GetAxisY(); j++) {
			SumObject[i][j] = new Object();
		}
	}
	/*for (std::vector<Object*> X : SumObject) {			//��� �������
		for (Object* x : X) {
			std::cout << x->GetMapping() << ' ';
		}
		cout << endl;
	}*/
	return SumObject;
}
