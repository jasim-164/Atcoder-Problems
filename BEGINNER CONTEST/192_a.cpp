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
    if(n%100==0)cout<<"100"<<endl;
    else{
        lli s=n%100;
        cout<<100-s<<endl;
    }
    return 0;
}
