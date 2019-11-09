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
	int chetchik = 0;
	int b1 = 0;
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
			if (b == 2048)
			{	
				ans.push_back("YES");
				break;
			}

			if (q[b] >= 1 && q.find(b) != q.end()) // Если значение есть и следующее значение есть в map тогда
			{
				q[b] = (q[b] + 1);		
				z[i] = (b1 =+ b);
				b = z[i];
				if(q.find(b) != q.end())
				if (b + b1 == 2048)
				{
					ans.push_back("YES");	
					b1 = b;
					break;
				}		

			}	
			if (q.find(b) == q.end())
			 {
				q[b] = 1;
				b1 = b;
				continue;
		     }
			ans.push_back("NO");
		}

	}
	for (int i = 0; i < n; i++)
	{
		if (ans[i] == "YES")
		{
			cout << ans[i] << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	system("pause");
}
