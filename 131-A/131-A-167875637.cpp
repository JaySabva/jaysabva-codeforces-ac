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

	string s;
	cin>>s;
	bool is =true;
	for(int i=1;i<s.length();i++)
	{
		if(s[i]>=97)
		{
			is=false;
			break;
		}
	}
	if(is)
	{
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>=97)
				s[i]=s[i]-32;
			else
				s[i]=s[i]+32;
		}
		cout<<s;
	}
	else
		cout<<s;
	return 0;
}