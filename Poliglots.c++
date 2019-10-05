// Нужно дорешать задачу
/// Ошибки это Vector subscript out of range
/// Не отображаются полностью все имена людей(может быть переполнение буфера)


#include <string>



#include <stdio.h>



#include <iostream>



#include <vector>



#include <map>



using namespace std;



int main()



{



	map<int, int>quant;

	vector<int>nameLang;

	short int numblang;



	short int numberpeople;



	std::cout << "Hello World!\n";



	cout << "Please enter a number of peoples" << "\n";



	cin >> numberpeople;



	cout << "Please enter a number of languages" << "\n";



	cin >> numblang;



	int namelanguage;



	int** number;

	int t = numberpeople * 16;

	int b = numblang * 16;

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



		number[1][i] = namenumber;



		// итерируемся по столбцам нулевой строки и присваиваем ячейкам имена(людей)



	}



	for (int i1 = 0; i1 < numberpeople; i1++) {



		for (int i2 = 0; i2 < numblang; i2++)



		{

			cout << number[i1][i2]; // Печатаем матрицу



		}



	}

	// делаем цикл для понятия какой человек знает какой язык



	for (int i = 1; i <= numberpeople; i++) {



		int chetchik = 1;



	tape:
		if (chetchik >= numblang)
		{
			cout << "OOPS" << endl;
			continue;
		}



		char b;



		cout << "Please enter a name of lang, people number " << (i) << " Language number " << chetchik << "\n";



		cin >> namelanguage;



		chetchik++;
		if (nameLang.size() == 0)
		{
			nameLang.push_back(namelanguage);
		}
		for (auto i : nameLang)
		{
			if (namelanguage == i)
			{
				continue;
			}
			else {
				nameLang.push_back(namelanguage);
			}
		}

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
	int chetchik = 0;
	for (int i = 0; i <= nameLang.size(); i++)
	{
		chetchik = 0;
		// При каждом прибавлении к i(индексу), мы обновляем счетчик
		for (int i3 = 1; i3 <= numberpeople; i3++)
		{
			for (int i4 = 1; i4 <= numblang; i4++)
			{
				// Заполняем ассоциативный массив и считаем с помощью счетчика сколько людей отвлекутся
				// итерируюсь змеечкой сначало первый человек затем второй, затем третий
				if (number[i4][i3] == nameLang[i])
				{
					chetchik++;
					quant[nameLang[i]] = chetchik;
					// счетчик это количество раз сколько раз язык повторяется,то есть сколько людей отвлекутся 
				}

			}
		}
	}

	// ЗАПОМНИТь
	for (int i = 1; i <= numberpeople; i++)
	{
		// итерируюсь по строкам матрицы
		// итерираюсь по количеству людей в матрице и присваиваю с нулевой столбца до i строки значение равно нулевой строке до i столбца
		number[i][0] = number[0][i];
	}



      
	// Получаем незаполненую смежную матрицу
	// Quant это ассоциативный массив
	
	for (int i1 = 1; i1 <= numberpeople; i1++)
	{
		for (int i2 = 1; i2 <= numblang; i2++)
		{
			for (int i3 = 2; i3 <= numberpeople; i3)
			{
				for (int i4 = 1; i4 <= numblang; i4)
		  // Заполняем частично матрицу смежности и оставшиеся значения заполняем (в другом цикле)
				{
					if (number[i2][i1] == number[i3][i4])
					{
						number[i2][i1] = quant[int(number[i2][i1])];
						
						// Но что делать если значений одинаковых не нашлось
						// придется позвать переводчика, но как это сделать
						// И что делать когда значений несколько и как их сравнить
					}
				}
			}

		}
		

		// Мы заполнили матрицу

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



		


		// АЛГОРИТМ ДЕЙКСТРЫ _ TO DO



		
		// Удаляем матрицу


		for (int c = 0; c < b; c++)



		{



			delete[]number[c];



		}



		delete[]number;



	}
}
