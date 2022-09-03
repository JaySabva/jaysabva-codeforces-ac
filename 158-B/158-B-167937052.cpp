#include<bits/stdc++.h>
using namespace std;
//@jay_sabva

#define FLASH() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IO() freopen("inputf.in","r",stdin); freopen("output.txt","w",stdout);
#define ll long long

int main()
{

// 	IO();//Input-Output
	FLASH();//Fast

	int n;
	cin>>n;
	int freq[5]={0};
	while(n--)
	{
		int s;
		cin>>s;
		freq[s]+=1;
	}
	int total=freq[4]+freq[3]+freq[2]/2;
	freq[1]-=freq[3];
	
	if(freq[2]%2==1)
	{
		total+=1;
		freq[1]-=2;
	}
	if(freq[1]>0)
	{
		total+=(freq[1]+3)/4;
	}

	cout<<total;
	return 0;
}