// Нужно дорешать задачу
/// Ошибки это Vector subscript out of range
/// Не отображаются полностью все имена людей(может быть переполнение буфера)
// ПРАВИЛЬНО ЗАПОЛНИТЬ МАТРИЦУ
// https://codeforces.com/gym/102375/problem/A
// https://codeforces.com/gym/102330/problem/G
// https://codeforces.com/contest/1237/problem/A
// https://codeforces.com/contest/1221/problem/A

#include <string>



#include <stdio.h>



#include <iostream>



#include <vector>


#include <iomanip> 


#include <map>


using namespace std;
int main()
{
	vector<int>vec;
	vector<string>answers;
	map<int, int>brat; // Количество братишек
	int number = 0;
	int kolall;
	cin >> kolall;
	int kol;
	
	for (int i = 0; i < kolall; i++)
	{
		cin >> kol;
		for(int i = 0; i < kol; i++)
		{
			vec.push_back(0);
			cin >> vec[i];
		}
		for (int i = 0; i < vec.size(); i++)
		{
			if (vec[i] == 2048)
			{
				answers.push_back("YES");
				break;
			}
			if (brat.count(vec[i]) == 1)
			{
				brat[vec[i]] += 1;
			}
			else
			{
				brat[vec[i]] == 1;
			}
		}
		
	}
}

/*
Ищем братков каждой цифры, если находим цифру у которой два брата. Тогда цифру удаляем и добавляем цифра1 + цифра1 и делаем ту же операцию работаем через ассоциативный массив


*/
