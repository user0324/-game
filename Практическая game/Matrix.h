// ����������� ������ �������  ����������: �� �������� ��� ��������� 
#pragma once
#include<vector>
class Object;
template <typename T>
class Matrix
{
	std::vector<std::vector<T*>> mat;
public:
	Matrix <T>(unsigned Line, unsigned ColumnY);		//����������� �� ���������

};
