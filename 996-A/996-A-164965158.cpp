#include <bits/stdc++.h>
using namespace std;
#define fastread() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//jaysabva
int main()
{

    fastread();

    int n;
    cin>>n;

    int ans=n/100;
    int x=n%100;

    ans+=x/20;
    x=x%20;

    ans+=x/10;
    x=x%10;

    ans+=x/5;
    x=x%5;

    ans+=x/1;

    cout<<ans;
    return 0;
}