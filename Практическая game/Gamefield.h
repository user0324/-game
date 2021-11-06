// Определение класса игровоеполе
#pragma once
class Cell;
class Gamefield   // Class gamefield
{
	/*friend*/
public:
	Gamefield();
	explicit Gamefield(int);			//Конструктор преобразования
	Gamefield(int, int);		//параметрический конструктор
	~Gamefield();
	Gamefield(const Gamefield &);
	
	void PrintXY();		//Вывод значений поля
	void SetXY(int x, int y);	//Установить значение игровогополя
	int SetOne(int);		//Установить Одно значение
	void CLS();			//Очистка экрана
	int  MaxControl();	//Контроль max кол-ва объектов на поле
	void Print(int a, int b, char z, bool game);	//Вывод игрового поля
	
private:
	int x, y;		//Ширина и длина игровогополя
	int  GetX() { return x; } // inline по умолчанию
	int  GetY();
};
inline int Gamefield::GetY() { return y; }

