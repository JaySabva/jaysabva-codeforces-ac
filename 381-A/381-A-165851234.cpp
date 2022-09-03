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
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int i=0,j=n-1,max,k=0;
	int sreeja=0,dima=0;
	while(i<=j)
	{
		if(a[i]>=a[j])
		{
			max=a[i];
			i++;
		}
		else
		{
			max=a[j];
			j--;
		}
		if(k%2==0)
			sreeja+=max;
		else
			dima+=max;
		k++;
	}
	cout<<sreeja<<" "<<dima<<"\n";

	return 0;

}