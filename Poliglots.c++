//В задаче люди могут быть переводчиками, нужно сделать полносвязный граф где будет расписано.
//Сколько человек отвлечется при разговоре и как перевести с одного языка на другой.
//То есть если люди не имеют общего языка то смотрим какой путь перевода будем наименьшим по количеству людей которые отвлеклись.
//Эта задача нахождения наименьшего пути где стоимость прохождения будет равна количеству людей которые отвлекутся.
//А точнее задача нахождения языка при котором отвлекутся наименьшее количество людей
// OlimpicProggraming.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector <string> lang;
	short int numblang;
	short int numberpeople;
	std::cout << "Hello World!\n";
	cout << "Please enter a number of peoples"<<"\n";
	cin >> numberpeople;
	cout << "Please enter a number of languages"<<"\n";
	cin >> numblang;
	int namelanguage;
	int** number;
	number = new int*[numberpeople];
	for (int i = 0; i < numberpeople; i++)
	{
		number[numberpeople] = new int[numblang];
	}
	int namenumber = 0;
	for (int i = 0; i < numberpeople; i++)
	{
		cout << "Enter a name for human number " << i <<"\n";
		cin >> namenumber;
		number[0][i] = namenumber;
		// итерируемся по столбцам нулевой строки и присваиваем ячейкам имена(людей)
	}
	// делаем цикл для понятия какой человек знает какой язык
	for (int i = 0; i < numberpeople; i++) {
	tape:
		int chetchik = 0;
		char b;
		cout << "Please enter a name of lang, people number " << (i) <<" Language number "<< chetchik<<"\n";
		cin >> namelanguage;
		chetchik++;
		number[chetchik][i] = namelanguage; // Строка начинается с одного ведь строка номер 0 занята именем человека, а номер столбца это номер человека который знает язык		
		std::cout << "Do you want a countinue enter a name of lang, Yes = y, No = n" << endl;
		cin >> b;
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
	for (int i1 = 0; i1 <  numberpeople;i1++) {
		for (int i2 = 0; i2 < numblang;i2++)
		{
			cout << number[i1][i2];
		}
	}
	for (int c = 0; c < numblang; c++)
	{
		delete[]number[c];
	}
	delete[]number;
}
