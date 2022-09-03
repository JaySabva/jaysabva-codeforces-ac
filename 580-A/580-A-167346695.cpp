#include<bits/stdc++.h>
using namespace std;
//@jay_sabva
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin>>n;
	int arr[n];
	int count=0,maxi=1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>=arr[i-1])
		{
			count++;
			maxi=max(maxi,count);
		}
		else
		{
			count=1;
		}
	}
	cout<<maxi;
	return 0;

}