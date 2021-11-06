
#include <iostream>
#include <string>
using namespace std;






void szyfr_podstawieniowy(string &zdanie, int ile)
{
    for (int i = 0; i < zdanie.length(); i++)
    {
        if (zdanie[i] == ' ')
        {
            continue;
        }
        zdanie[i] += ile;
        if (zdanie[i] > 'z')
        {
            zdanie[i] -= 26;
        }
    }

}


void szyfr_przestawieniowy(string &zdanie)
{
    for (int i = 0; i < zdanie.length() - 1; i+=2)
    {
        char literka = zdanie[i];
        zdanie[i] = zdanie[i + 1];
        zdanie[i + 1] = literka;
    }
}

void szyfr_przestawieniowo_podstawieniowy(string &zdanie, int ile)
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
        zdanie[i] += ile;
        if (zdanie[i] > 'z')
        {
            zdanie[i] -= 26;
        }
    }
}

void odszyfruj_szyfr_podstawieniowy(string &zdanie)
{
    for (int j = 0; j < 26; j++)
    {
        for (int i = 0; i < zdanie.length(); i++)
        {
            if (zdanie[i] == ' ')
            {
                continue;
            }
            zdanie[i] -= j;
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
}

void odszyfruj_szyfr_przestawieniowy(string &zdanie)
{
    for (int i = 0; i < zdanie.length() - 1; i += 2)
    {
        char literka = zdanie[i];
        zdanie[i] = zdanie[i + 1];
        zdanie[i + 1] = literka;
    }
}

void odszyfruj_szyfr_przestawieniowo_podstawieniowy(string &zdanie)
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
            zdanie[i] -= j;
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
}


int main()
{

    cout << "Podaj ciag znakow z klawiatury ktory chcesz zaszyfrowac (malymi literami i bez zadnych znakow)" << endl;
    string zdanie;
    getline(cin, zdanie);




    int szyfr;
    cout << "WYBIERZ W JAKI SPOSOB CHCESZ ZASZYFROWAC TEKST." << endl;
    cout << "1. Szyfr podstawieniowy (szyfr cezara)" << endl << "2. Szyfr przestawieniowy" << endl << "3. Szyfr podstawieniowy i przestawieniowy" << endl;
    cin >> szyfr;





    if (szyfr == 1)
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

        szyfr_podstawieniowy(zdanie, ile);
    }

    if (szyfr == 2)
    {
        szyfr_przestawieniowy(zdanie);
    }

    if (szyfr == 3)
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

        szyfr_przestawieniowo_podstawieniowy(zdanie, ile);
    }

    cout << zdanie << endl;




    int taknie;
    cout << "czy chcesz odszyfrowac tekst?  1.Tak 2.Nie" << endl;
    cin >> taknie;
    if (taknie == 1)
    {
        if (szyfr == 1)
        {
            odszyfruj_szyfr_podstawieniowy(zdanie);
            cout << zdanie << endl;
        }
        else if (szyfr == 2)
        {
            odszyfruj_szyfr_przestawieniowy(zdanie);
            cout << zdanie << endl;
        }
        else if (szyfr == 3)
        {
            odszyfruj_szyfr_przestawieniowo_podstawieniowy(zdanie);
            cout << zdanie << endl;
        }
    }
    else if (taknie == 2)
    {

    }
}
