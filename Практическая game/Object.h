#pragma once
#include "Cell.h"
class Object :
	public Cell
{
	struct ObjectXYZ		//Описание объекта
	{
		int x;		//Координаты объекта на поле по оси Х
		int y;		//Координаты объекта на поле по оси Y
		char Z;		//Графическое изображение объекта
	}ObXYZ;
	struct DataXYZ		//Структура для хранения данных о объектах
	{
		ObjectXYZ z;
		DataXYZ *next;		//Cписок адресная часть на следующий элемент
		DataXYZ *prev;		//Список адресная часть на предыдущий элемент
	}listok;
	int num;		//Возможное кол-во объектов
public:
	
};

