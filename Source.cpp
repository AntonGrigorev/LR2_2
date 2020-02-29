#include <iostream>
#include <fstream>
#include <windows.h>
#include "Vector.h"
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size;
	ifstream fin;
	fin.open("input.txt");
	fin >> size;
	double* arr1 = new double[size];
	for (int i = 0; i < size; i++) {
		fin >> arr1[i];
	}
	Vector Vec(arr1, size);
	cout << Vec << endl;
	double* arr2 = new double[size];
	for (int i = 0; i < size; i++) {
		fin >> arr2[i];
	}
	for (int i = 0; i < size; i++) {
		cout << arr2[i] << " ";
	}
	cout << endl;
	fin.close();
	Vector P;
	Vector Res;
	Res = Vec + arr2; // перегрузка + (объединение массива в объекте класса и массива)
	cout << Res << endl;
	cin >> P; //перегрузка cin(создание массива заданного размера. Значение элемента = удвоенный номер)
	cout << P << endl; // перегрузка cout(вывод элементов объекта класса)
	cout << "Номер элемента: " << endl; // перегрузка [](вывод конкретного элемента)
	int ind;
	cin >> ind;
	cout << P[ind]<< " - элемент с номером "<<ind<<endl;
	ofstream fout;
	fout.open("output.txt");
	fout << P << endl;
	fout << Res;
	fout.close();
}
