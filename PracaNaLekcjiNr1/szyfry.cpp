#include "szyfry.h"
#include <iostream>

string szyfr::szyfr_podstawieniowy(string &zdanie, int ile)
{
	for (int i = 0; i < zdanie.length(); i++)
	{
		if (zdanie[i] == ' ')
		{
			continue;
		}
		
		if (zdanie[i] >= 97 && zdanie[i] <= 122)
		{
			zdanie[i] += ile;
		}
		if (zdanie[i] > 'z')
		{
			zdanie[i] -= 26;
		}
	}
	return zdanie;
}

string szyfr::szyfr_przestawieniowy(string &zdanie)
{
	for (int i = 0; i < zdanie.length() - 1; i += 2)
	{
		char literka = zdanie[i];
		zdanie[i] = zdanie[i + 1];
		zdanie[i + 1] = literka;
	}
	return zdanie;
}

string szyfr::szyfr_przestawieniowo_podstawieniowy(string &zdanie, int ile)
{
	for (int i = 0; i < zdanie.length() - 1; i += 2)
	{
		char literka = zdanie[i];
		zdanie[i] = zdanie[i + 1];
		zdanie[i + 1] = literka;
	}
	for (int i = 0; i < zdanie.length(); i++)
	{
		if (zdanie[i] == ' ')
		{
			continue;
		}

		if (zdanie[i] >= 97 && zdanie[i] <= 122)
		{
			zdanie[i] += ile;
		}
		else
		{
			continue;
		}


		if (zdanie[i] > 'z')
		{
			zdanie[i] -= 26;
		}
	}
	return zdanie;
}


string deszyfr::odszyfruj_szyfr_podstawieniowy(string &zdanie)
{
	for (int j = 0; j < 26; j++)
	{
		for (int i = 0; i < zdanie.length(); i++)
		{
			if (zdanie[i] == ' ')
			{
				continue;
			}

			if (zdanie[i] >= 97 && zdanie[i] <= 122)
			{
				zdanie[i] -= j;
			}
			else
			{
				continue;
			}


			if (zdanie[i] > 'z')
			{
				zdanie[i] -= 26;
			}
			if (zdanie[i] < 'a')
			{
				zdanie[i] += 26;
			}
		}
		cout << zdanie << endl;
	}
	return zdanie;
}


string deszyfr::odszyfruj_szyfr_przestawieniowy(string &zdanie)
{
	for (int i = 0; i < zdanie.length() - 1; i += 2)
	{
		char literka = zdanie[i];
		zdanie[i] = zdanie[i + 1];
		zdanie[i + 1] = literka;
	}
	return zdanie;
}


string deszyfr::odszyfruj_szyfr_przestawieniowo_podstawieniowy(string &zdanie)
{
	for (int i = 0; i < zdanie.length() - 1; i += 2)
	{
		char literka = zdanie[i];
		zdanie[i] = zdanie[i + 1];
		zdanie[i + 1] = literka;
	}
	for (int j = 0; j < 26; j++)
	{
		for (int i = 0; i < zdanie.length(); i++)
		{
			if (zdanie[i] == ' ')
			{
				continue;
			}

			if (zdanie[i] >= 97 && zdanie[i] <= 122)
			{
				zdanie[i] -= j;
			}
			else
			{
				continue;
			}
			if (zdanie[i] > 'z')
			{
				zdanie[i] -= 26;
			}
			if (zdanie[i] < 'a')
			{
				zdanie[i] += 26;
			}
		}
		cout << zdanie << endl;
	}
	return zdanie;
}