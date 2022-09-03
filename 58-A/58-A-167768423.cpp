#include<bits/stdc++.h>
using namespace std;
#define ll long long
//@jay_sabva
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    string s;
    cin>>s;
    string a="hello";
    int j=0,count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==a[j])
        {
            j++;
            count++;
        }
    }
    if(count==5)
        cout<<"YES";
    else
        cout<<"NO";

	return 0;
}