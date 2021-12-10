#include <iostream>
#include <stdlib.h>
#include <vector>
#include "sortowanie.h"
using namespace std;
void sortowanie::wyswietl_liczby() {
	for (int i = 0; i < 100; i++)
	{
		cout << liczby[i] << "\n";
	}
}

void sortowanie::generowanie_liczb() {
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		liczby.push_back(rand() % 1001);
	}
}

void sortowanie::babelkowe() {
	for (int i = 0; i < liczby.size(); i++)
		for (int j = 1; j < liczby.size() - i; j++) 
			if (liczby[j - 1] > liczby[j])
				swap(liczby[j - 1], liczby[j]);
}

void sortowanie::sortowanie_wstawianie() {

	vector <int> tablica = liczby;
	for (int j = 99; j > -1; j--)
	{
		o = j + 1;
		x = tablica[j];
		while (o < 100 && x > tablica[o])
		{
			tablica[o - 1] = tablica[o];
			o = o + 1;
		}
		tablica[o - 1] = x;
	}
	liczby = tablica;
}