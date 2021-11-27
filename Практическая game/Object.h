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
	std::vector<Object*> SetObject(Gamefield&);				//задание объектов 
	std::vector<std::vector<Object*>> CreatingObject(Gamefield&);				//Инициализация объектов согласно размерам поля
	std::vector<std::vector<Object*>> AddObject(Gamefield&, std::vector<Object*>);			//задать объекты или объект на поле
};

