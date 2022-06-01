#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=0;i<n;i++)
const lli maxn=10000000000;
int main()
{
lli n;
cin>>n;
lli rslt=sqrt(n+1);
lli cnt=0;
unordered_set<lli>s;
for(lli i=2;i<=rslt;i++)
{
    lli val=i*i;
  while(val<=n)
  {
      cnt++;
      s.insert(val);
      val*=i;
  }
}
cout<<n-s.size()<<endl;
    return 0;
}
