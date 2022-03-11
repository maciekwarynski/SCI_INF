class MyVector
{
public:
	MyVector() {
		size = 10;
		tablica = new int[size];
		for (int i = 0; i < size; i++) {
			tablica[i] = 0;
		}
	}
	MyVector(unsigned int a) {
		size = a;
		tablica = new int[size];
		for (int i = 0; i < size; i++) {
			tablica[i] = 0;
		}
	}


	void add(int value);
	void remove();
	int printAt(int index);
	void addAt(int index, int value);
	void printTable();
	void removeAt(int index);

	~MyVector() {
		delete [] tablica;
	}

private:
	int* tablica;
	unsigned int size;
};
