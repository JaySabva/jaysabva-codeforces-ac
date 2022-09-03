#include<bits/stdc++.h>
using namespace std;
#define ll long long
//@jay_sabva
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n,m;
	cin>>n>>m;
	int c=min(n,m);
	if(c%2==0)
		cout<<"Malvika";
	else 
		cout<<"Akshat";
	return 0;

}