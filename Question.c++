#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
static short int d;
bool outOFALLFORMULA(int x1, int x2, int x3, int y1, int y2, int y3, int xi1, int xi2, int xi3, int yi1, int yi2, int yi3, int xs, int ys)
{
	// Используем формулу Герона
	//x1 и y1 - координаты точек,а xs и ys сумма точек
	double ONETRIANGLE = sqrt((pow((xs - x1), 2) + pow((xs - y1), 2)));
	double TWOTRIANGLE = sqrt((pow((xs - x2), 2) + pow((xs - y2), 2)));
	double THREETRIANGLE = sqrt((pow((xs - x3), 2) + pow((xs - y3),2)));//Cтороны треугольника
	double ONEOFTRIANGLE1 = sqrt((pow((x1 - x2), 2) + pow((y1 - y2), 2)));
	double TWOOFTRIANGLE1 = sqrt((pow((x2 - x3), 2) + pow((y2 - y3), 2)));
	double THREEOFTRIANGLE1 = sqrt((pow((x1 - x3), 2) + pow((y1 - y3), 2)));
    // P - Это полупериметр,S - Площадь
	double P = (ONEOFTRIANGLE1 + TWOOFTRIANGLE1 + THREEOFTRIANGLE1) / 2;
	
	double S = sqrt(P*(P - ONETRIANGLE)*(P - TWOOFTRIANGLE1) * (P - THREEOFTRIANGLE1));
    
	double P2 = (ONEOFTRIANGLE1 + TWOOFTRIANGLE1 + ONETRIANGLE);

	double S2 = sqrt(P2*(P2 - ONEOFTRIANGLE1)*(P2 - TWOOFTRIANGLE1)*(P2 - ONETRIANGLE));

	double P3 = (ONETRIANGLE + THREETRIANGLE + THREEOFTRIANGLE1) / 2;
	
	double S3 = sqrt(P3 *(P3 - ONETRIANGLE) *(P3 - THREETRIANGLE) * (P3 - THREEOFTRIANGLE1));

	double P4{ TWOTRIANGLE + THREETRIANGLE + TWOOFTRIANGLE1 / 2 };
	double S4{ sqrt(P4*(P4 - TWOTRIANGLE)*(P4 - THREETRIANGLE)*(P4 - TWOOFTRIANGLE1)) };
	bool result;
	
	if (abs(S - (S2 + S3 + S4)) < 1) {
		result = false;
	}
	else
	{
		result = true;
	}
	double ONETRIANGLE1 = sqrt((pow((xs - x1), 2) + pow((xs - yi1), 2)));
	double TWOTRIANGLE1 = sqrt((pow((xs - xi2), 2) + pow((xs - yi2), 2)));
	double THREETRIANGLE1 = sqrt((pow((xs - xi3), 2) + pow((xs - yi3), 2)));//Cтороны треугольника
	double ONEOFTRIANGLE2 = sqrt((pow((xi1 - xi2), 2) + pow((yi1 - yi2), 2)));
	double TWOOFTRIANGLE2 = sqrt((pow((xi2 - xi3), 2) + pow((yi2 - yi3), 2)));
	double THREEOFTRIANGLE2 = sqrt((pow((xi1 - xi3), 2) + pow((yi1 - yi3), 2)));
	// P - Это полупериметр,S - Площадь
	double P = (ONEOFTRIANGLE2 + TWOOFTRIANGLE2 + THREEOFTRIANGLE2) / 2;

	double S = sqrt(P*(P - ONEOFTRIANGLE2)*(P - TWOOFTRIANGLE2) * (P - THREEOFTRIANGLE2));

	double P2 = (ONEOFTRIANGLE2 + TWOOFTRIANGLE2 + ONETRIANGLE1);

	double S2 = sqrt(P2*(P2 - ONEOFTRIANGLE2)*(P2 - TWOOFTRIANGLE2)*(P2 - ONETRIANGLE1));

	double P3 = (ONETRIANGLE1 + THREETRIANGLE1 + THREEOFTRIANGLE2) / 2;

	double S3 = sqrt(P3 *(P3 - ONETRIANGLE1) *(P3 - THREETRIANGLE1) * (P3 - THREEOFTRIANGLE2));

	bool result1;
	double P4{ TWOTRIANGLE + THREETRIANGLE + TWOOFTRIANGLE1 / 2 };
	double S4{ sqrt(P4*(P4 - TWOTRIANGLE)*(P4 - THREETRIANGLE)*(P4 - TWOOFTRIANGLE1)) };
	if (abs(S - (S2 + S3 + S4)) < 1) {
		result1 = false;
	}
	else
	{
		result1 = true;
	}
	if (result1 == result == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int DlinaOtrezka(int x1, int x2,int y1,int y2)
{
	int dlina = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	return dlina;
}
bool PeresecheniyPrymix(int x1, int x2, int y1, int y2, int x3,int x4,int y3, int y4)
{
	//Если пересекаются то возвращаем False
	if (x1 == x2 && y1 == y2)
	{
		return false;
	}
	while (x1 != x2 && y1 != y2)
	{
		while (x3 != x4 && y1 != y2)
		{
			if (x1 == x3 && y1 == y3)
			{
				return false;
			}
			if (x1 > x2)
			{
				x1 -= 1;
			}
			if (x1 < x2)
			{
				x1 += 1;
			}
			if (y1 > y2)
			{
				y1 -= 1;
			}
			if (y1 < y2)
			{
				y1 += 1;
			}





			if (x3 > x4)
			{
				x3 -= 1;
			}
			if (x3 < x4)
			{
				x3 += 1;
			}
			if (y3 > y4)
			{
				y3 -= 1;
			}
			if (y3 < y4)
			{
				y1 += 1;
			}
		}
	}
}


int main()
{
	int entityofboxes = 0;
	int entityofsuvenirs = 0;
	int entityvershinofboxes = 0;
	cout << "Enter entity of boxes" << endl;
	cin >> entityofboxes;
	cout << "Enter entity of suvenirs" << endl;
	cin >> entityofsuvenirs;
	cout << "Enter entity of vershins and form" << endl;
	cin >> entityvershinofboxes;

}
