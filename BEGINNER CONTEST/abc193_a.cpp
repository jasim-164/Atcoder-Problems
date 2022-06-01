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
  int a,b;
  cin>>a>>b;
  double rslt=(a-b)*1.0/a;
  rslt=rslt*100;
  cout<<rslt<<endl;
    return 0;
}
