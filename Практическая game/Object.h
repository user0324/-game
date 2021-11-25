#pragma once			//Определение класса объект
#include<vector>
class Gamefield;
class Object
{
	int dotX, dotY;
	char mapping;
public:
	Object();			//классический конструктор
	~Object();			//классический деструктор
	int GetDotX() const { return dotX; }		//получить координату объекта в точке Х
	int GetDotY() const { return dotY; }		//получить координату объекта в точке Y
	char GetMapping() const { return mapping; }			//получить графическое отображение объекта
	void SetObject(int, int, char);				//задать 1 объект
	std::vector<Object*> CreatingObject(int, Gamefield&);				//Инициализация объектов согласно размерам поля
};

