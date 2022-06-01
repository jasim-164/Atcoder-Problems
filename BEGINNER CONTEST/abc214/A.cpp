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
    int ara[n+2];
    for(int i=1;i<=n;i++)
    {
        if(i<126)
        {
            ara[i]=4;
        }
         else if(i<212)
        {
            ara[i]=6;
        }
        else
        {
            ara[i]=8;
        }
    }
    cout<<ara[n]<<endl;

    return 0;
}



