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
	string s;
	cin>>s;
	for(auto &x:s)
	{
		if(x>'4')
			x='9'-x+'0';
	}
	if(s.front()=='0')
		s.front()='9';
	cout<<s<<"\n";
}