#include<bits/stdc++.h>
using namespace std;
//jaysabva
int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
    cin>>n;
    int arr[n];
    int max=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=max-arr[i];
    }
    cout<<sum;
	return 0;
}