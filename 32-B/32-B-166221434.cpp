#include<bits/stdc++.h>
using namespace std;
//@jay_sabva
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='-' && s[i+1]=='-')
		{
			cout<<2;
			i+=1;
		}
		else if(s[i]=='-' && s[i+1]=='.')
		{
			cout<<1;
			i+=1;
		}
		else if(s[i]=='.')
			cout<<0;
	}
	return 0;

}