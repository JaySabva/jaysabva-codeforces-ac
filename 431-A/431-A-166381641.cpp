#include<bits/stdc++.h>
using namespace std;
//@jay_sabva
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    long long a,b,c,d,ans=0;
    string s;
    cin>>a>>b>>c>>d;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
    	if(s[i]=='1')
    		ans+=a;
    	if(s[i]=='2')
    		ans+=b;
    	if(s[i]=='3')
    		ans+=c;
    	if(s[i]=='4')
    		ans+=d;
    }
    cout<<ans;
	return 0;

}