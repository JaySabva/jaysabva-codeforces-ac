#include<bits/stdc++.h>
using namespace std;
//@jay_sabva
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n,m;
	cin>>n>>m;
	int arr[m];
	for(int i=0;i<m;i++)
		cin>>arr[i];
		
	sort(arr,arr+m);
	int least=arr[n-1]-arr[0];
	
	for(int i=1;i<=m-n;i++)
	{
		if(arr[i+n-1]-arr[i]<least)
		{
			least=arr[i+n-1]-arr[i];
		}
	}
	cout<<least<<"\n";
	return 0;

}