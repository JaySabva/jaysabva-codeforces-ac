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
	if(n%2==1)
	{
		n=n/2;
		n--;
		cout<<n+1<<"\n"<<3<<" ";
	}
	else
	{
		n=n/2;
		cout<<n<<"\n";
	}
	for(int i=0;i<n;i++)
		cout<<2<<" ";
	cout<<"\n";
	return 0;

}