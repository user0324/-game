#pragma once			// Определение класса экран
class Gamefield;
class Screen
{
	bool game;
public:
	Screen();		//классический конструктор
	void CLS()const;		//очистка экрана
	/*void PrintScreen()*/
	int GoGamefield(Gamefield&);		//задание размеров поля
};

