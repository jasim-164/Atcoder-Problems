#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=1;i<=n;i++)
const lli maxn=1000005;
int main()
{
    int t,n;

        cin>>n;
        lli ara[n+2];
        for(int i=1;i<=n;i++)
        {
            cin>>ara[i];
        }
        //cout<<pow(8+5,2);
        lli sum=0;
        for(int i=2;i<=n;i++)
        {
            for(int j=i-1;j>=1;j--)
            {
                lli rslt=fabs(ara[i]-(ara[j]));
                sum+=pow(rslt,2);

            }
            cout<<sum<<" ";
        }
        cout<<sum<<endl;


    return 0;
}

