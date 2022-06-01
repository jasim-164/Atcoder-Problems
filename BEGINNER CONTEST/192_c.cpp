#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=0;i<n;i++)
const lli maxn=1000005;
lli asend(lli n)
{
    while(n!=0)
    {
        r=n%10;
        n=n/10;

    }
}
void f(lli n,lli k)
{
    i=0;
    while(i!=k)
    {
        lli p=asend(n)-decend(n);
        if(p==0)
        {
            cout<<p<<endl;
            break;
        }
        i++;
    }
    cout<<p<<endl;
    return;
}
int main()
{
    lli n,k;
    cin>>n>>k;
    f(n,k);

    return 0;
}
