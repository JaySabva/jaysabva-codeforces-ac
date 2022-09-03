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

	int n;
	cin>>n;
	int arr[n];
	int even[n],odd[n];
	int e=0,o=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]%2==0)
		{
			even[0]=i;
			e++;
		}
		else
		{
			odd[0]=i;
			o++;
		}

	}
	if(e>=2)
	{
			cout<<odd[0]+1;
	}
	else if(o>=2)
	{
			cout<<even[0]+1;
	}
	return 0;
}