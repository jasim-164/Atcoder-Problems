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
    int t,n,A,X,Y;
    cin>>n>>A>>X>>Y;
    lli rslt=0;
    if(n>=A)
    {
    rslt=(n-A)*Y;
    rslt+=A*X;
    }
    else
    {
         rslt+=n*X;
    }
    cout<<rslt<<endl;
    return 0;
}

