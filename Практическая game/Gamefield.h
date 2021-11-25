#pragma once				//Определение класса игровоеполе
#include<vector>
class Object;
class Gamefield
{
	int axisX, axisY;	//оси игровогополя
public:
	Gamefield();		//класический конструктор
	~Gamefield();		//класический деструктор
	int GetAxisX() const { return axisX; }		//inline получить значение оси Х
	int GetAxisY() const;			//получить значение оси Y
	void SetAxisYX(int, int);		//установить значение игровоеполе
	int MaxControl() const;			//максимально возможное кол-во объектов на поле
	void DefinitionField(std::vector<std::vector<Object*>> Field);		//инициализация поля	
	
};
inline int Gamefield::GetAxisY() const { return axisY; }		//получить значение оси Y
