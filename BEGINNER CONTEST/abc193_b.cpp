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
    //a p x
    int n;
    cin>>n;
    lli a[n+1], p[n+1], x[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>p[i]>>x[i];
    }
    lli min_=INT_MAX,t=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<x[i])
        {
            t=1;
            min_=min(min_,p[i]);
        }
    }
    if(t==1)
        cout<<min_<<endl;
    else
        cout<<"-1"<<endl;


    return 0;
}
