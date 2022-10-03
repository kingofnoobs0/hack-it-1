#include<bits/stdc++.h>
using namespace std;
int getPairsCount(int arr[], int n, int l, int r)
{
	int count = 0; // Initialize result

	// Consider all possible pairs and check their sums
	//sort(arr,arr+n);
	for (int i = 0; i < n; i++)
	{
      
		for (int j = i+1; j < n; j++)
		{  int diff=arr[j]-arr[i];
			if (diff > l && diff <= r)
				{ cout<<arr[i]<<arr[j]<<endl;
					count++;
				}
		}
	}
	return count;
}

int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n;
		int l, r;
		cin >> l >> r;

		int h[n];
		for (int i = 0; i < n; i++)
		{
			cin >> h[i];
		}

		cout << getPairsCount(h, n, l, r);
	}
	return 0;
}
