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
    lli t,l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        lli m=max(l,r);
        lli dif=abs(l-r);
        lli cnt=1,p=dif-1;
        for(int i=dif;i<=m;i++)
        {
            cnt=cnt*(p);
            p--;

        }
        cout<<cnt<<endl;
    }
}
