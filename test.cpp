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
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli ara[n+1];
        lli m=INT_MIN;
        vector<lli>v;
        f(i,0,n-1)
        {
            cin>>ara[i];
            if(ara[i]>m)
                m=ara[i];
            v.push_back(ara[i]);
        }
        lli sum1=0;
        sort(ara,ara+n);
        if(ara[n-1]==m && (m==4 or m==8))
        {
              while(ara[n-1]%2==0)
            {
                ara[n-1]/=2;
                ara[n-2]*=2;
            }
             f(i,0,n-3)
          {
            while(ara[i]%2==0)
            {
                ara[i]/=2;
                ara[n-2]*=2;
            }
          }
           lli  sum=0;
         f(i,0,n-1)
        {
            sum+=ara[i];
        }
        cout<<sum<<endl;
        }

        else
        {
        f(i,0,n-2)
        {
            while(ara[i]%2==0)
            {
                ara[i]/=2;
                ara[n-1]*=2;
            }
        }
        lli  sum=0;
         f(i,0,n-1)
        {
            sum+=ara[i];
        }
        cout<<sum<<endl;
        }
    }
    return 0;
}

 
