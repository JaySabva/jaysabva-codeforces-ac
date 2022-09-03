#include<bits/stdc++.h>
using namespace std;
#define ll long long
//@jay_sabva
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n,m;
	cin>>n>>m;
	char color[n][m];
	int spy=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>color[i][j];
			if(color[i][j]!='B'&& color[i][j]!='W' && color[i][j]!='G')
			{
				spy++;
			}
		}
	}
	if(spy!=0)
		cout<<"#Color";
	else
		cout<<"#Black&White";
	return 0;

}