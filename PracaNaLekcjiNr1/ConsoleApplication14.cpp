
#include <iostream>
#include <string>
#include "szyfry.h"
using namespace std;

szyfr szyfrowanie;
deszyfr odszyfrowanie;



int main()
{

	cout << "Podaj ciag znakow z klawiatury ktory chcesz zaszyfrowac (malymi literami i bez zadnych znakow)" << endl;
	string zdanie;
	getline(cin, zdanie);




	int jaki;
	cout << "WYBIERZ W JAKI SPOSOB CHCESZ ZASZYFROWAC TEKST." << endl;
	cout << "1. Szyfr podstawieniowy (szyfr cezara)" << endl << "2. Szyfr przestawieniowy" << endl << "3. Szyfr podstawieniowy i przestawieniowy" << endl;
	cin >> jaki;




	if (jaki == 1)
	{
		int ile;
		do
		{
			cout << "O ile chcesz przesunac litry (max 26)" << endl;
			cin >> ile;
			if (0 >= ile > 26)
			{
				cout << "ZLA LICZBA" << endl;
			}
			else
			{
				continue;
			}
		} while (0 < ile >= 26);

		szyfrowanie.szyfr_podstawieniowy(zdanie, ile);
	}

	if (jaki == 2)
	{
		szyfrowanie.szyfr_przestawieniowy(zdanie);
	}

	if (jaki == 3)
	{
		int ile;
		do
		{
			cout << "O ile chcesz przesunac litry (max 26)" << endl;
			cin >> ile;
			if (0 >= ile > 26)
			{
				cout << "ZLA LICZBA" << endl;
			}
		} while (0 < ile >= 26);

		szyfrowanie.szyfr_przestawieniowo_podstawieniowy(zdanie, ile);
	}

	cout << zdanie << endl;




	int taknie;
	cout << "czy chcesz odszyfrowac tekst?  1.Tak 2.Nie" << endl;
	cin >> taknie;
	if (taknie == 1)
	{
		if (jaki == 1)
		{
			odszyfrowanie.odszyfruj_szyfr_podstawieniowy(zdanie);
			cout << zdanie << endl;
		}
		else if (jaki == 2)
		{
			odszyfrowanie.odszyfruj_szyfr_przestawieniowy(zdanie);
			cout << zdanie << endl;
		}
		else if (jaki == 3)
		{
			odszyfrowanie.odszyfruj_szyfr_przestawieniowo_podstawieniowy(zdanie);
			cout << zdanie << endl;
		}
	}
	else if (taknie == 2)
	{

	}
}
