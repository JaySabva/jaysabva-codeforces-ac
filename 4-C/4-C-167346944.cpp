#include<bits/stdc++.h>
using namespace std;
//@jay_sabva
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin>>t;
	
    map<string,int>freq;
    
	while(t--)
	{
        string s;
        cin>>s;
        if(freq[s]==0)
        {
            cout<<"OK\n";
        }
        else
        {
            cout<<s<<freq[s]<<"\n";
        }
        freq[s]++;
        
	}
	return 0;
}