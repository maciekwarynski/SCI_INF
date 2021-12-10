#include <iostream>
#include <string>
#include "szyfr.h"
#include <time.h>
#include <cstdlib>
using namespace std;

szyfry szyfrowanie;
deszyfr odszyfrowanie;
szyfry_rsa generowanie;



int main()
{

	cout << "Podaj ciag znakow z klawiatury ktory chcesz zaszyfrowac (malymi literami i bez zadnych znakow)" << endl;
	string zdanie;
	getline(cin, zdanie);




	int jaki;
	cout << "WYBIERZ W JAKI SPOSOB CHCESZ ZASZYFROWAC TEKST." << endl;
	cout << "1. Szyfr podstawieniowy (szyfr cezara)" << endl << "2. Szyfr przestawieniowy" << endl << "3. Szyfr podstawieniowy i przestawieniowy" << endl << "4. Generowanie szyfru publicznego i prywatnego" << endl;
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
		cout << zdanie << endl;
	}

	if (jaki == 2)
	{
		szyfrowanie.szyfr_przestawieniowy(zdanie);
		cout << zdanie << endl;
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
		cout << zdanie << endl;
	}
	if (jaki == 4)
	{
		int lpierwsze[25] = { '2','3','5','7','11','13','17','19','23','29','31','37','41','43','47','53','59','61','67','71','73','79','83','89','97' };
		srand(time(NULL));
		int p = 13;
		int q = 11;
		int n = p * q;
		int euler = generowanie.funkcja_eulera(p, q);
		int e = 7;
		int d = generowanie.modInverse(e, euler);
		cout << "publiczny" << n << endl << e << endl;
		cout << "prywatny" << e << endl << d << endl;

	}





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