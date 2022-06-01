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
    int n;
        cin>>n;
        int ara[n+1],ara2[n+1];
        int m=INT_MAX;
        int m2=INT_MAX;
        int m3=INT_MAX;
        f(i,n)
        {
           cin>>ara[i]>>ara2[i];
           int sum=ara[i]+ara2[i];
            m=min(m,sum);
        }


    return 0;
}

