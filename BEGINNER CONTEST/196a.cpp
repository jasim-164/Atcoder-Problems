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
 int a,b,c,d;
 cin>>a>>b>>c>>d;
 int m1=a-d;
 int m2=b-c;
 cout<<max(m1,m2)<<endl;
    return 0;
}

