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

	int s,n;
	cin>>s>>n;
	pair<int,int> dragon[n];
	for(int i=0;i<n;i++)
	{
		cin>>dragon[i].first>>dragon[i].second;
	}
	sort(dragon,dragon+n);
	int spy=0;
	for(int i=0;i<n;i++)
	{
		if(s<=dragon[i].first)
		{
			spy++;
			break;
		}
			s+=dragon[i].second;
		
	}
	if(spy==0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}