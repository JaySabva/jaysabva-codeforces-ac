#include<bits/stdc++.h>
using namespace std;
#define ll long long
//@jay_sabva
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s1,s2;
	cin>>s1>>s2;
	int counter=1;
	int j=0;
	for(int i=0;i<s2.length();i++)
	{
		if(s2[i]==s1[j])
		{
			j++;
			counter++;
		}
	}
	cout<<counter;
	return 0;

}