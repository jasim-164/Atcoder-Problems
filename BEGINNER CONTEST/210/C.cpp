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
        int t,n,k;
        cin>>n>>k;
        lli ara[n+2];
        //set<lli>s;
        for(int i=1;i<=n;i++)
        {
            cin>>ara[i];
            //s.insert(ara[i]);
        }
        lli m=INT_MIN;
         for(int i=1;i<=n-k+1;i++)
         {
            set<lli>s;
            for(int j=i;j<=i+k-1;j++)
            {
               s.insert(ara[j]);
            }
            lli ans=s.size();
            //cout<<ans<<endl;
            s.clear();
            m=max(m,ans);
         }



        //int ans=s.size();
        cout<<m<<endl;

    return 0;
}
