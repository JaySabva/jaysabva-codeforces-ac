#include<iostream>
using namespace std;
//@jay_sabva
int main()
{
    int k,r;
    cin>>k>>r;
    for(int i=1;;i++)
    {
        if(((i*k)-r)%10==0||(i*k)%10==0)
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}