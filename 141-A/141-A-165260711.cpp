#include<bits/stdc++.h>
using namespace std;
//@jay_sabva
int main()
{
    string a,b,c,sum;
    cin>>a>>b>>c;
    
    sum=a+b;
    
    sort(sum.begin(),sum.end());
    sort(c.begin(),c.end());
    
    if(sum==c)  cout<<"YES";
    else        cout<<"NO";
    return 0;
}