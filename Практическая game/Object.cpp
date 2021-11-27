#include<iostream>			//Реализация класса объект
#include<vector>
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
	cout << "Clasic konstruktor class Object" << endl;
}
Object::~Object()		//классический деструктор класса объект удаление в обратном порядке
{
	cout << "Clasic destruktor ~Object" << endl;		//для отладки
}
std::vector<Object*>Object::SetObject(Gamefield& b)		//задание объектов 
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
			cout << "Введенные данные не корректны." << endl;
			cin.clear();
			cin.ignore(32767, '\n');
			continue;
		}
		if (kol < 1 || kol > b.MaxControl())
		{
			cout << "Значение <В диапозоне от 1 до " << b.MaxControl() << ">" << endl;
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
/*std::vector<std::vector<Object*>>Object::AddObject(Gamefield& b, std::vector<Object*> Sum)			//задать объекты или объект на поле
{

}*/