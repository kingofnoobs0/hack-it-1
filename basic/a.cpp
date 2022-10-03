#include<bits/stdc++.h>
using namespace std;

void solve()
{
  
  int x,a,b;
  cin>>x>>a>>b;
  if(x%a==0)
  {
  	int p=x/a;
  	d=b*p;
  	sum=0;
  		for(int i=1;i<sqrt(d);i++)
  		{
  			if(sum>x)
  				break;
  			if(den%i==0)
  			{
  				sum=sum+i;
  				if(d/i!=i)
  				{
  					sum=sum+d/i;
  				}
  			}
  			if(sum!=x)
  			{
  				cout<<-1<<endl;
  			}
  			else
  				cout<<d<<endl;
  		}
  	}
  }
  else
  	cout<<-1<<endl;


}

int main()
{
	int tc=1;
	cin>>tc;
	while(tc--)

	{ 
       solve();
	}
	return 0;
}
