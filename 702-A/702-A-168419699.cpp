#include<bits/stdc++.h>
using namespace std;
//@jay_sabva

#define FLASH() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IO() freopen("inputf.in","r",stdin); freopen("output.txt","w",stdout);
#define ll long long
void solve();
int main()
{

// 	IO();//Input-Output
	FLASH();//Fast

	int t=1;
    while(t--)
    {
    	solve();
    }
	return 0;
}
void solve()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int count=1,max=1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[i-1])
			count++;
		else
		{
			if(count>max)
				max=count;
			count=1;
		}
	}
	if(count>max)
		max=count;
	cout<<max;
}