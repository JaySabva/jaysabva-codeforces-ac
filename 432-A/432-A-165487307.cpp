#include<bits/stdc++.h>
using namespace std;
//@jay_sabva
int main()
{
    long long n,k;
    cin>>n>>k;
    long long arr[n];
    int count=0; 
    for(int i=0;i<n;i++) 
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<5)
        {
            if(5-arr[i]>=k)
            count++;
        }
    }
    if(count>=3)
    {
        cout<<count/3;
    }
    else
    {
        cout<<0;
    }
    return 0;
}