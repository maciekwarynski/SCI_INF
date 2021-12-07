#pragma once
using namespace std;
#include <iostream>
#include <string>

class szyfry
{
public:
	string szyfr_podstawieniowy(string &zdanie, int ile);
	string szyfr_przestawieniowy(string &zdanie);
	string szyfr_przestawieniowo_podstawieniowy(string &zdanie, int ile);
};


class deszyfr
{
public:
	string odszyfruj_szyfr_podstawieniowy(string &zdanie);
	string odszyfruj_szyfr_przestawieniowy(string &zdanie);
	string odszyfruj_szyfr_przestawieniowo_podstawieniowy(string &zdanie);
};

class szyfry_rsa
{
public:
	int funkcja_eulera(int q, int p);
	int modInverse(int e, int euler);
};