// Определение класса игровоеполе
#pragma once

class Gamefield   // Class gamefield
{ 
public:
	Gamefield();
	explicit Gamefield(int);			//Конструктор преобразования
	Gamefield(int, int);		//параметрический конструктор
	~Gamefield();
	Gamefield(const Gamefield &);
	int  GetX() const { return x; } // inline по умолчанию
	int  GetY() const;
	void PrintXY();		//Вывод значений поля
	void SetXY(int x, int y);	//Установить значение игровогополя
	int SetOne(int);		//Установить Одно значение
	int  MaxControl();	//Контроль max кол-ва объектов на поле
	
private:
	int x, y;		//Ширина и длина игровогополя
};
inline int Gamefield::GetY() const { return y; }

