#include <string>

#include <stdio.h>

#include <iostream>

#include <vector>

#include <map>

using namespace std;

int main()

{

	map<int, int>quant;

	short int numblang;

	short int numberpeople;

	std::cout << "Hello World!\n";

	cout << "Please enter a number of peoples" << "\n";

	cin >> numberpeople;

	cout << "Please enter a number of languages" << "\n";

	cin >> numblang;

	int namelanguage;

	int** number;
	int t = numberpeople * 8;
	int b = numblang * 8;
	number = new int*[t];

	for (int i = 0; i < t; i++)

	{

		number[i] = new int[b];

	}
	// Заполняем таблицу нулями
	for (int i1 = 0; i1 < numberpeople; i1++) {

		for (int i2 = 0; i2 < numblang; i2++)

		{
			number[i1][i2] = 0;
			cout << number[i1][i2]; // Печатаем матрицу

		}

	}


	
	int namenumber = 0;

    // начинаем с 1 столбца, а не с нулевого потому что 0 строка и нулевого столбца будет равна нулю и не использоваться
	for (int i = 1; i <= numberpeople; i++)

	{	
	    namenumber = 0;

        cout << "Enter a name for human number " << i;

     	cin >> namenumber;

		number[0][i] = namenumber;
		
		// итерируемся по столбцам нулевой строки и присваиваем ячейкам имена(людей)

	}
	
	for (int i1 = 0; i1 < numberpeople; i1++) {

		for (int i2 = 1; i2 < numblang; i2++)

		{
			cout << number[i1][i2]; // Печатаем матрицу

		}

	}
	// делаем цикл для понятия какой человек знает какой язык

	for (int i = 1; i <= numberpeople; i++) {

		int chetchik = 1;

	tape:


		char b;

		cout << "Please enter a name of lang, people number " << (i) << " Language number " << chetchik << "\n";

		cin >> namelanguage;

		chetchik++;

		number[chetchik][i] = namelanguage; // Строка начинается с одного ведь строка номер 0 занята именем человека, а номер столбца это номер человека который знает язык		

		std::cout << "Do you want a countinue enter a name of lang, Yes = y, No = n" << endl;

		cin >> b;

		// повтор с помощью goto

		if (b == 'y') {

			goto tape;

		}

		if (b == 'n') {



		}

	}

	int start = 0;

	int stop = 0;

	cout << "Enter a number human(start of ZERO) for start";

	cin >> start;

	cout << "Enter a number human(start of ZERO) for stop";

	cin >> stop;

	// Просим ввести старт и стоп для алгоритма дейкстра

	for (int i1 = 0; i1 < numberpeople; i1++) {

		for (int i2 = 0; i2 < numblang; i2++)

		{

			cout << number[i1][i2]; // Печатаем матрицу

		}

	}

	// Удаляем матрицу

	for (int c = 0; c < b; c++)

	{

		delete[]number[c];

	}

	delete[]number;

}
