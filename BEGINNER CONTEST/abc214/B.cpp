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
    int s,t;
    cin>>s>>t;
    lli cnt=0;
    f(i,0,s)
    {
        f(j,0,s)
        {
           f(k,0,s)
           {
               if(i+j+k<=s && i*j*k<=t)
                cnt++;
           }
        }

    }
    cout<<cnt<<endl;


    return 0;
}


