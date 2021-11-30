#include<iostream>			//Реализация класса объект
#include<vector>
#include<algorithm>
#include "Object.h"
#include"Gamefield.h"
using std::cout;
using std::endl;
using std::cin;

Object::Object()			//классический конструктор класса объект
{
	this->dotX = 1;
	dotY = 1;
	mapping = '$';
	cout << "Clasic сonstruktor class Object" << endl;
}
Object::~Object()		//классический деструктор класса объект удаление в обратном порядке
{
	cout << "Clasic destruktor ~Object" << endl;		//для отладки
}
std::vector<std::vector<Object*>>Object::SetObject(Gamefield& b)		//задание любых объектов в заданных координатах согласно размерам поля
{
	setlocale(LC_ALL, "Russian");
	cout << "Максимально возможное кол-во объектов на поле: " << "(" << b.MaxControl() << ")" << endl;
	cout << "Введите кол-во объектов, которое требуется создать:";
	int kol;
	while (true)
	{
		cin >> kol;
		if (cin.fail())
		{
			cout << "Введенные данные не корректны. Повторите ввод" << endl;
			cin.clear();
			cin.ignore(32767, '\n');
			continue;
		}
		if (kol < 1 || kol > b.MaxControl())
		{
			cout << "Значение <В диапозоне от 1 до " << b.MaxControl() << ">" << endl;
			continue;
		}
		else break;
	}
	char View = '@';			//изображение объекта пока для отладки  const
	int LineX, ColumnY;
	std::vector<Object>SetXY(kol); //переменные по осям 
	for (int i = 0; i < SetXY.size(); i++) {
		while (true)
		{
			cout << "Задайте координату по оси Х (строки)." << endl;
			cin >> LineX;
			if (cin.fail())
			{
				cout << "Введенные данные не корректны. Повторите ввод" << endl;
				cin.clear();
				cin.ignore(32767, '\n');
				continue;
			}
			if (LineX < 1 || LineX >b.GetAxisX())
			{
				cout << "Значение <В диапозоне от 1 до " << b.GetAxisX() << ">" << endl;
				continue;
			}
			else break;
		}
		SetXY[i].dotX = LineX - 1;
		while (true)
		{
			cout << "Задайте координату по оси Y (столбцы)." << endl;
			cin >> ColumnY;
			if (cin.fail())
			{
				cout << "Введенные данные не корректны. Повторите ввод" << endl;
				cin.clear();
				cin.ignore(32767, '\n');
				continue;
			}
			if (ColumnY < 1 || ColumnY >b.GetAxisY())
			{
				cout << "Значение <В диапозоне от 1 до " << b.GetAxisY() << ">" << endl;
				continue;
			}
			else break;
		}
		SetXY[i].dotY = ColumnY - 1;
		SetXY[i].mapping = View;
	}
	/*std::sort(SetXY.begin(), SetXY.end(), [](const Object& lhs, const Object& rhs)		//сорировка по заданному полю хз 
	{
		return lhs.GetDotX() < rhs.GetDotX();										//что там ввел пользователь чтобы обрушить программу 
	});
	for (Object& x : SetXY) {						//для отладки
			cout << x.GetMapping() << " ";			// выводим значение
			cout << x.GetDotY() << " ";				//полей для проверки
			cout << x.GetDotX() << " ";
		cout << endl;							//сортировки
	}*/
	std::vector<std::vector<Object*>>SumObjectv;		//объявление переменной вектор векторов
	SumObjectv.resize(b.GetAxisX());					//задание размера по оси Х строки
	for (int i = 0; i < SumObjectv.size(); i++) {
		SumObjectv[i].resize(b.GetAxisY());			//задание размера по оси Y столбцы
	}			//создана матрица пока пустая
	for (int i = 0; i < b.GetAxisX(); i++) {		
		for (int j = 0; j < b.GetAxisY(); j++) {
			SumObjectv[i][j] = new Object();		//в циклах заполняю матрицу размера XY объектами Конструктора класса
		}
	}
	for (Object& x : SetXY) {
		SumObjectv[x.GetDotX()][x.GetDotY()]->mapping = x.GetMapping();
	}
	return SumObjectv;
}
std::vector<std::vector<Object*>> Object::CreatingObject(Gamefield& b)				//Инициализация объектов согласно размерам поля
{
	std::vector<std::vector<Object*>>SumObject;		//объявление переменной вектор векторов
	SumObject.resize(b.GetAxisX());					//задание размера по оси Х столбцы
	for (int i = 0; i < SumObject.size(); i++) {
		SumObject[i].resize(b.GetAxisY());			//задание размера по оси Y строки
	}			//создана матрица пока пустая
	for (int i = 0; i < b.GetAxisX(); i++) {		//в циклах заполняю матрицу размера XY объектами Конструктором
		for (int j = 0; j < b.GetAxisY(); j++) {
			SumObject[i][j] = new Object();
		}
	}
	/*for (std::vector<Object*> X : SumObject) {			//для отладки
		for (Object* x : X) {
			std::cout << x->GetMapping() << ' ';
		}
		cout << endl;
	}*/
	return SumObject;
}
