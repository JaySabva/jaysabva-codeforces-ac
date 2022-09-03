#include<bits/stdc++.h>
using namespace std;
//jaysabva
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int r,b;
    cin>>r>>b;
    if(r>=b)
    {
        cout<<b<<" "<<(r-b)/2;
    }
    else if(r<=b)
    {
        cout<<r<<" "<<(b-r)/2;
    }
	return 0;
}