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

// 	int t;
//     cin>>t;
//     while(t--)
//     {
    	solve();
    // }
	return 0;
}
void solve()
{
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	int ans=0,rem,q;
	for(int i=0;i*a<=n;i++)
	{
		for(int j=0;i*a+j*b<=n;j++)
		{
			rem=n-i*a-j*b;
			if(rem%c==0)
			{
				q=rem/c;
				ans=max(ans,i+j+q);
			}
		}
	}
	cout<<ans;
}