#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,a,b) for(int i=a;i<=b;i++)
#define mod 1000000007
#define inf 1e18
const lli maxn=1000005;
int main()
{
    int t,n;
    string s;
    cin>>s;
    n=s.size();
    int val=s[n-1]-'0';
    s.erase(n-2,2);
    //cout<<s<<endl;

    if(val>=7)
    {
        cout<<s<<"+"<<endl;
    }
      else if(val>=3)
    {
        cout<<s<<endl;
    }
    else
    {
        cout<<s<<"-";
    }
    return 0;
}


