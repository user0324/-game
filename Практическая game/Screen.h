// Определение класса Экран Вывод информации в консоль и задание настроек перед началом игры
#pragma once
class Gamefield;
class Screen
{
	bool game;
public:
	Screen();		//Класический конструктор
	void SetGame(bool);		//Установить значение класса Экран
	void CLS()const;			//Очистка экрана
	void PrintScr(Gamefield &, int y, int x, char );		//Вывод игрового поля 
};