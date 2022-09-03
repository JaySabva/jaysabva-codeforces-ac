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

    transform(s.begin(), s.end(), s.begin(), ::tolower);
        
    string a;

    for(int i=0;i<s.length();i++)
    {
            if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i')
            {
                continue;
            }
            else
            {
                a+='.';
                a+=s[i];        
            }
    }
        
        cout<<a;
	return 0;
}