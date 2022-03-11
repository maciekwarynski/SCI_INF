#pragma once
#include <vector>
using namespace std;
class sortowanie
{
public:
	void wyswietl_liczby();
	void generowanie_liczb();
	void babelkowe();
	void sortowanie_wstawianie();
	int szukanie(int value);
	int FindValue(int lewyZakres, int prawyZakres, int szukanaWartosc, const std::vector<int>& wektorDanych);
private:
	vector <int> liczby;
	int x, o;
};