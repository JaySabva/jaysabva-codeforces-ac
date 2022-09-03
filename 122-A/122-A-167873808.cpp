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
	
	int lucky[]={4,7,47,74,44,444,447,474,477,777,774,744};
	int n,count=0;
	cin>>n;
	for(int i=0;i<12;i++)
	{
		if(n%lucky[i]==0)
		count++;
	}
	if(count>0)
		cout<<"YES\n";
	else
		cout<<"NO";
	return 0;
}