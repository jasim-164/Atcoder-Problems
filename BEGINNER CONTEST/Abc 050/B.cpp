#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli n;
    cin>>n;
    lli ara[n+1];
    lli sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    lli m;
    cin>>m;
    while(m--)
    {
        lli p,x;
        cin>>p>>x;
        lli ans=sum-ara[p]+x;
        cout<<ans<<endl;
    }
    return 0;
}

