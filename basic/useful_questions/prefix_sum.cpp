#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
	int prefix[N];
int main()
{
	int n;cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		prefix[i]=a[i]+prefix[i-1];
	}
	int q;
	cin>>q;
	while(q--)
	{
		int x,y;
	cin>>x>>y;
	cout<<prefix[y]-prefix[x-1]<<endl;
	}
	

}

