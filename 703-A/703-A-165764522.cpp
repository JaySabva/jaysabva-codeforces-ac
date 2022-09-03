#include<bits/stdc++.h>
using namespace std;
//@jay_sabva
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin>>n;
	int mi[n];
	int ch[n];
	int mis=0;
	int chi=0;
	for(int i=0;i<n;i++)
	{
		cin>>mi[i]>>ch[i];
		if(mi[i]>ch[i])
			mis++;
		else if(mi[i]<ch[i])
			chi++;
	}
	if(mis>chi)
		cout<<"Mishka";
	else if(chi>mis)
		cout<<"Chris";
	else
		cout<<"Friendship is magic!^^";


	return 0;
}