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
        lli n=r;
        lli cnt=0,p=0;
        i(r<l)
        {
        while(r!=l)
        {
            p=r-n;
            if(n==l)
            {
                r--;
                n=r;
            }
            if(p>=l&&p<=r)
            {
            cnt++;
            n--;
            }
            else
            {
              n--;
            }

        }
        cout<<cnt<<endl;
        }
    }

    return 0;
}
