#include<iostream>
#include<vector>
#include<string>
using namespace std;
int checkGeNinDnk(string g, vector<string>GEN)
{
		for (int b = 0;b < GEN.size();b++) {
			if (GEN[b] == g)
			{
				return 1;
			}
			else {
				return 0;
			}
		}
}


int main(int argc, char*argv[])
{
	/* вывод строки
		for (int i = 0; i < s.size(); i++) {
			cout << "[" << s[i] << "]" << endl;
		}
	*/
	string f;
	cout << "Please enter a quantity organizations" << endl;
	int n;
	cin >> n;	
	    vector<string>DNK;
		vector<string>GEN;
		GEN.push_back("abc");
		GEN.push_back("dca");
		GEN.push_back("erc");
		GEN.push_back("dvd");
		GEN.push_back("cvd");
		GEN.push_back("dnk");
		GEN.push_back("krv");
		GEN.push_back("cdg");
		GEN.push_back("rtr");
		GEN.push_back("brg");
		GEN.push_back("krl");
		GEN.push_back("url");
		GEN.push_back("vrt");
		GEN.push_back("jhg");
		vector<int>k;
	for (int i = 1;i < n + 1;i++)
	{

		int chetchik = 0;
		cout << "Plese enter a operation + - add to GEN ? - add to DNK" << endl;
		char masstr[5];
		cin >> masstr;
		k.push_back(0);
		if (masstr[0] == '+')
		{
			string g;
			for (int i = 1; i < 4;i++) {
				g += masstr[i];
			}	
			GEN.push_back(g);
			for (auto&elem : GEN)
			{
				cout << elem << endl;
			}
		}
		if (masstr[0] == '?')
		{
		        string pref;
		        for(int i = 1;i<4;i++)
			{
			   pref += masstr[i];
			}
		        DNK.push_back(pref);
			for (auto&DNKTEST : DNK) {
				k[i] += checkGeNinDnk(DNKTEST, GEN);
			}
			if (k[i] == 0)
			{
				string g;
				for (int i = 1; i < 4;i++)
				{
					g += masstr[i];
			    }
				DNK.push_back(g);
				cout << k[i] << endl;
			}	
			else 
			{
				int n1 = 4;
				for (int j = 0; j < k[i]; j++)
				{
					char x = masstr[n1];
					for (i = n; i > 1; i--)
						masstr[i] = masstr[i - 1];
					masstr[0] = x;
				}
				string g;
				for (int b = 1;b < 4;b++)
				{
					g += masstr[b];
				}	
				DNK.push_back(g);
				cout << k[i] << endl;
			}

		}
		else {
			continue;
		}
	}
	system("pause");
	return 0;
	
}
