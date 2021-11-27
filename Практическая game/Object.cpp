#include<iostream>			//���������� ������ ������
#include<vector>
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
	cout << "Clasic konstruktor class Object" << endl;
}
Object::~Object()		//������������ ���������� ������ ������ �������� � �������� �������
{
	cout << "Clasic destruktor ~Object" << endl;		//��� �������
}
std::vector<Object*>Object::SetObject(Gamefield& b)		//������� �������� 
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
			cout << "��������� ������ �� ���������." << endl;
			cin.clear();
			cin.ignore(32767, '\n');
			continue;
		}
		if (kol < 1 || kol > b.MaxControl())
		{
			cout << "�������� <� ��������� �� 1 �� " << b.MaxControl() << ">" << endl;
		}
		else break;
	}
	int Stol;
	cin >> Stol;
	char m;
	cin >> m;
	std::vector<Object*>newObject(kol);
	for (int i = 0; i < newObject.size(); i++) {
		newObject[i] = new Object();
		newObject[i]->dotX(Stol);
		newObject[i]->dotY(Stol);
		newObject[i]->mapping(m);
	}
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
/*std::vector<std::vector<Object*>>Object::AddObject(Gamefield& b, std::vector<Object*> Sum)			//������ ������� ��� ������ �� ����
{

}*/