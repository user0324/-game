// ќпределение класса ячейка участок пол€ (1,1)
#pragma once
class Cell
{
	int x, y;	// оординаты участка пол€ (1,1)
	char Z;		//√рафическое изоброжение €чейки
	int num;		//кол-во
	int GetX() { return x; }
	int GetY() { return y; }
	char GetZ() { return Z; }
public:
	Cell();
	~Cell();
	void SetXYZ(int x, int y, char z);		//”становить значение €чейки


};