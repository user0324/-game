#pragma once				//Определение класса игровоеполе
#include<vector>
class Object;
class Gamefield
{
	unsigned axisX, axisY;	//оси игровогополя
    std::vector<std::vector<Object> > Matrix;			//игровоеполе основной объект для работы 
public:
	Gamefield();			//класический конструктор по умолчанию
	Gamefield(unsigned Line, unsigned ColumnY);		//класический конструктор игровогополя
	~Gamefield();		//класический деструктор
	Gamefield(const Gamefield&);		//конструктор копирования просто чтобы был в данном классе хватает и побитового копирования 
	unsigned GetAxisX() const { return axisX; }		//inline получить значение оси Х строки
	unsigned GetAxisY() const;			//получить значение оси Y столбцы
	unsigned MaxControl() const;			//максимально возможное кол-во объектов на поле
	void DefinitionField(std::vector<std::vector<Object*>> Field);		//инициализация поля	
	
};
inline unsigned Gamefield::GetAxisY() const { return axisY; }		//получить значение оси Y
