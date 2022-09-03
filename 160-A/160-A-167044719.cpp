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
	int total=0,sum=0,half=0,count=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		total+=arr[i];
	}
	half=total/2;
	sort(arr,arr+n);
	for(int i=n-1;i>=0;i--)
	{
		sum+=arr[i];
		count++;
		if(sum>half)
			break;
	}
	cout<<count;


	return 0;

}