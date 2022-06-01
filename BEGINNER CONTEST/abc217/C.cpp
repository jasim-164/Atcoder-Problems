#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,a,b) for(int i=a;i<=b;i++)
#define mod 1000000007
#define inf 1e18
const lli maxn=1000005;
int main()
{
    int t,n;
    cin>>n;
    lli ara[n+1];

    lli ara1[n+1];
    memset(ara1,0,sizeof(ara1));
    f(i,1,n)
    {
        cin>>ara[i];
    }
    f(i,1,n)
    {
        ara1[ara[i]]=i;
    }
      f(i,1,n)
    {
        cout<<ara1[i]<<" ";
    }
    cout<<endl;
    return 0;
}


