#include <iostream>
#include <vector>
#include "klasa.h"

using namespace std;

int main()
{
	sortowanie obiekt;
	cout << "TO TWOJE LICZBY\n";
	obiekt.generowanie_liczb();
	obiekt.wyswietl_liczby();
	int wybor;
	cout << "CO CHCESZ ZROBIC?"
		<< "\n1.SORTOWANIE BABELKOWE"
		<< "\n2.SORTOWANIE PRZEZ WSTAWIANIE\n"
		<< "\n3.CHCE ZNALEZC LICZBE 3 W ZBIORZE\n";
	cin >> wybor;
	if (wybor == 1)
	{
		obiekt.babelkowe();
		cout << "\nLICZBY PO SORTOWANIU\n";
		obiekt.wyswietl_liczby();
		int wybor3;
		cout << "Czy chcesz znalezc liczbe 5 w zbiorze? 1.tak  2.nie " << endl;
		cin >> wybor3;
		if (wybor3 == 1)
		{
			obiekt.szukanie(5);
		}
		else
		{
		}
	}
	if (wybor == 2)
	{
		obiekt.sortowanie_wstawianie();
		cout << "\nLICZBY PO SORTOWANIU\n";
		obiekt.wyswietl_liczby();
		int wybor2;
		cout << "Czy chcesz znalezc liczbe 20 w zbiorze? 1.tak  2.nie " << endl;
		cin >> wybor2;
		if (wybor2 == 1)
		{
			obiekt.szukanie(20);
		}
		else
		{
		}
	}
	if (wybor == 3)
	{
		obiekt.szukanie(3);
	}
}