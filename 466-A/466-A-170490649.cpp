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
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	if(m*a>b)
	{
		int rem=(n%m)*a;
		if(rem>b)
		{
			cout<<n/m*b+b;
		}
		else
		{
			cout<<n/m*b+rem;
		}
	}
	else
		cout<<n*a;
		
}