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

	int n,m;
	cin>>n>>m;
	int l=1;
	ll time=0;
	for(int i=0;i<m;i++)
	{
		int cur;
		cin>>cur;
		if(cur>=l)
			time+=cur-l;
		else
			time+=n-(l-cur);
		l=cur;
	}
	cout<<time<<"\n";
	return 0;
}