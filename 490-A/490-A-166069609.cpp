#include<bits/stdc++.h>
using namespace std;
#define ll long long
//@jay_sabva
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin>>n;
	int x=0,y=0,z=0,w,s;
	int arr[n],a[5000],b[5000],c[5000];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1)
		{
			a[x]=i+1;
			x++;
		}
		else if(arr[i]==2)
		{
			b[y]=i+1;
			y++;
		}
		else if(arr[i]==3)
		{
			c[z]=i+1;
			z++;
		}
	}
	
	s=min(x,y);
	w=min(s,z);
	
	cout<<w<<"\n";
	
	for(x=0,y=0,z=0;x<w,y<w,z<w;x++,y++,z++)
		cout<<a[x]<<" "<<b[x]<<" "<<c[x]<<"\n";
	return 0;

}