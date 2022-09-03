#include<bits/stdc++.h>
using namespace std;
//@jay_sabva
int main()
{
    int arr[3];
    int sum=0;
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+3);
    for(int i=0;i<2;i++)
    {
        sum+=abs(arr[i]-arr[i+1]);
    }
    cout<<sum;
    return 0;
}