#include <iostream>
#include "klasa.h"
using namespace std;

int main()
{
	MyVector Vector;
	Vector.add(3);
	Vector.printTable();
	cout << "--------------------" << endl;
	Vector.remove();
	Vector.printTable();
	cout << "--------------------" << endl;
	Vector.addAt(5, 2);
	Vector.printTable();
	cout << "--------------------" << endl;
	Vector.removeAt(5);
	Vector.printTable();
	cout << "--------------------" << endl;
	Vector.addAt(1, 8);
	Vector.printAt(1);

}
