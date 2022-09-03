#include<bits/stdc++.h>
using namespace std;
#define ll long long
//@jay_sabva
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a,b,c;
	cin>>a>>b;
	c=max(a,b);
	c=(6-c)+1;

	if(c%2==1)
	{
		if(c==3)
			cout<<"1/2";
		else
			cout<<c<<"/6";
	}
	else
	{
		if(c==4)
			cout<<"2/3";
		else
			cout<<1<<"/"<<6/c;
	}
	return 0;

}