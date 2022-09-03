#include<bits/stdc++.h>
using namespace std;
#define ll long long
//@jay_sabva
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin>>s;
	if(s[0]!='-')
		cout<<s;
	else
		if(s[s.length()-1]>s[s.length()-2])
		{
			if(s.length()==3&&s[1]=='0')
			{
				cout<<0;
			}
			else	
			{
				for(int i=0;i<s.length()-1;i++)
					cout<<s[i];
			}
		}
		else
		{
			if(s.length()==3&&s[2]=='0')
			{
				cout<<0;
			}
			else
			{
				for(int i=0;i<s.length()-2;i++)
					cout<<s[i];
				cout<<s[s.length()-1];
			}
		}
	return 0;

}