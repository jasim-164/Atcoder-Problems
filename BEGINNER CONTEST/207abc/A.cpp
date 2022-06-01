
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
        int t,n=3;
        lli ara[n+1];
        f(i,n)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n);
        cout<<ara[1]+ara[2]<<endl;

    return 0;
}
