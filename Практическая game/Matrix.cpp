#include<iostream>			//���������� ������ �������
#include<vector>
#include "Matrix.h"

template <typename T>
Matrix<T>::Matrix<T>(unsigned Line, unsigned ColumnY)		//����������� �� ���������
{
	mat.resize(Line);
	for (int i = 0; i < mat.size(); i++) {
		mat[i].resize(ColumnY);
	}
}