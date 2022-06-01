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
    lli n;
    cin>>n;
    lli cnt=0;
    while(n!=0)
    {
        n/=10;
        cnt++;
    }
    lli temp=n;
    while(temp!=0)
    {

    }
    if(n<1000)
    {
        cout<<"0"<<endl;
    }

    else
    {
        lli rslt=n-1000+1;
        cout<<rslt<<endl;
    }
    return 0;
}

