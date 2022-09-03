#include<bits/stdc++.h>
using namespace std;
//@jay_sabva

#define FLASH() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IO() freopen("inputf.in","r",stdin); freopen("output.txt","w",stdout);
#define ll long long

int main()
{

// 	IO();//Input-Output
	FLASH();//Fast

	int n,l;
	cin>>n>>l;
	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	sort(arr,arr+n);

	int diff=max(arr[0],l-arr[n-1])*2;

	for(int i=0;i<n-1;i++)
	{
		diff=max(diff,arr[i+1]-arr[i]);
	}

	cout.precision(20);
	
	cout<<fixed<<diff/2.0<<"\n";
	return 0;
}