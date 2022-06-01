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
        lli a[n+1];
        cin>>a[0]>>a[1]>>a[2];
        int rslt=a[0]+a[2]-2*a[1];
        if(rslt==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            sort(a,a+n);
            int rslt=a[0]+a[2]-2*a[1];
            if(rslt==0)
                cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
        }


    return 0;
}

