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

	int a,b,c;
	cin>>a>>b>>c;
	int p=a+b+c,q=(a+b)*c,r=a*(b+c),s=a*b*c;
	cout<<max(max(p,q),max(r,s));
	return 0;
}