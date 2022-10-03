#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	string t="tea";
		string c="coffee";
		string b="beer";

	cin >> tc;
	while (tc--)
	{
		string s;
		getline(cin, s);
				
		if (size_t found = s.find(t))
		{
          cout<<"SERVE TEA\n";
		}
		else if (size_t found = s.find(c))
		{
          cout<<"SERVE COFFEE\n";
		}
		else if (size_t found = s.find(c))
		{
          cout<<"SERVE BEAR\n";
		}

		return 0;
	}
}