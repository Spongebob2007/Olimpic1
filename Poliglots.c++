
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
	using namespace std;
	vector<int>z;
	vector<string>ans;
	map<int, int>q;
	short int n;
	short int n1;
	int chet = 0;
	int b = 0;
	cin >> n;
	for (short int i1 = 0; i1 < n; i1++)
	{
		cin >> n1;
		for (short int i = 0; i < n1; i++)
		{
			z.push_back(0);
			cin >> z[i];
			b = z[i];
			if (chet != 1)
			{
				if (b == 2048)
				{
					ans.push_back("YES");
					chet++;
					break;
				}
				mark:
				if (q.find(b) == q.end())
				{
					q[b] = 1;    
				}
				if (q[b] > 1)
				{
					q[b]++;
					if (b + b == 2048)
					{
						ans.push_back("YES");
						break;
					}
					else
					{
					    z[i] = (b =+ b);
						goto mark;
					}
				}
			}
		}
		chet = 0;
	}
	system("pause");
}
