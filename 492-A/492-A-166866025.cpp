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
    int counter=0;
    int sum=0;
    int i=1;
    while(n>=counter)
    {
        sum+=i;
        counter+=sum;
        i++;
    }
    cout<<i-2<<"\n";
	return 0;
}