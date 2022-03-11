#include "klasa.h"
#include <iostream>

using namespace std;


void MyVector::add(int value) {
	int* temp1 = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		temp1[i] = tablica[i];
	}
	temp1[size] = value;
	delete[] tablica;
	tablica = temp1;
	size++;
}

void MyVector::remove() {
	int* temp2 = new int[size - 1];
	for (int i = 0; i < size - 1; i++)
	{
		tablica[i] = temp2[i];
	}
	delete[] tablica;
	tablica = temp2;
	size--;
}


int MyVector::printAt(int index) {
	if (index >= 0 || index < size)
	{
		cout << tablica[index] << endl;
	}
	else {
		cout << "Nie ma takiego miejsca w wektorze" << endl;
		return -2147483647;
	}
}

void MyVector::addAt(int index, int value) {
	if (index >= 0 || index < size)
	{
		int* temp3 = new int[size + 1];
		int j = 0;
		for (int i = 0; i < size + 1; i++)
		{
			if (i == index)
			{
				temp3[index] = value;
				continue;
			}
			temp3[i] = tablica[j];
			j++;
		}
		size++;
		delete[] tablica;
		tablica = temp3;
	}
	else {
		return;
	}
}


void MyVector::removeAt(int index) {
	if (index >= 0 || index < size)
	{
		int* temp4 = new int[size - 1];
		int j = 0;
		for (int i = 0; i < size - 1; i++)
		{
			if (i == index)
			{
				j++;
			}
			temp4[i] = tablica[j];
			j++;
		}
		size--;
		delete[] tablica;
		tablica = temp4;
	}
	else {
		return;
	}
}


void MyVector::printTable() {
	for (int i = 0; i < size; i++)
	{
		cout << tablica[i] << endl;
	}
}