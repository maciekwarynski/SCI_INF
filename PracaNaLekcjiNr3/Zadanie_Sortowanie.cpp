#include <iostream>
#include <vector>
#include "sortowanie.h"

using namespace std;

int main()
{
	sortowanie obiekt;
	cout << "TO TWOJE LICZBY\n";
	obiekt.generowanie_liczb();
	obiekt.wyswietl_liczby();
	int wybor;
	cout << "JAK CHCESZ JE POSORTOWAC?"
		<< "\n1.SORTOWANIE BABELKOWE"
		<< "\n2.SORTOWANIE PRZEZ WSTAWIANIE\n";
	cin >> wybor;
	if (wybor == 1)
	{
		obiekt.babelkowe();
		cout << "\nLICZBY PO SORTOWANIU\n";
		obiekt.wyswietl_liczby();
	}
	if (wybor == 2)
	{
		obiekt.sortowanie_wstawianie();
		cout << "\nLICZBY PO SORTOWANIU\n";
		obiekt.wyswietl_liczby();
	}
} 