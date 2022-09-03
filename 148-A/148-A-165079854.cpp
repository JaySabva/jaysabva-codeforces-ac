#include <bits/stdc++.h>
using namespace std;
#define fastread() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//@jay_sabva
int main()
{

    fastread();

    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int count=0;
    for(int i=1;i<=d;i++)
    {
        if(i%k==0)
        {
            continue;
        }
        else if(i%l==0)
        {
            continue;
        }
        else if(i%m==0)
        {
            continue;
        }
        else if(i%n==0)
        {
            continue;
        }
        count++;
    }
    cout<<d-count;
    return 0;
}