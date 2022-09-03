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
	int count=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==s[i-1])
		{
			count++;
			if(count>=6)
			{
				cout<<"YES";
				return 0;
			}
		}
		else
		{
			count=0;
		}
	}
	cout<<"NO";


	return 0;

}