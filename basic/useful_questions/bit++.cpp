#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int ans=0;
	cin>>n;
	string s;
	for(int i=0;i<n;i++)
	{
		getline(cin,s);
		if(s=="X++" or s=="++X")
		{
			ans=ans+1;
		}
		else if(s=="--X" or s=="X--")
		{
			ans=ans-1;
		}
	}
	cout<<ans<<endl;

}
