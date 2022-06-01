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
    lli v,t,s,d;
    cin>>v>>t>>s>>d;
    double rslt=d*1.0/v;
    if(rslt>=t&&rslt<=s)
        cout<<"No"<<endl;
    else cout<<"Yes"<<endl;

    return 0;
}

