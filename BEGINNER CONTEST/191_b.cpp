#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=0;i<n;i++)
const lli maxn=1000005;
int main()
{
    lli n,x;
    cin>>n>>x;
    lli ara[n+1];
    f(i,n)
    {
        cin>>ara[i];
    }
    f(i,n)
    {
        if(ara[i]==x)continue;
        else cout<<ara[i]<<" ";
    }
    cout<<endl;


    return 0;
}

