#include<bits/stdc++.h>
using namespace std;
#define ll long long
//@jay_sabva
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int n,sumx=0,sumy=0,sumz=0;
    cin>>n;
    while(n--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    if(sumx==0 && sumy==0 && sumz==0)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
	return 0;
}