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
    string s,t;
    cin>>s>>t;
    int n=min(s.size(),t.size());
    int temp=-1;
    f(i,0,n-1)
    {
        if(s[i]<t[i])
        {
            temp=1;
            break;
        }
        if(s[i]>t[i])
        {
            temp=0;
            break;
        }
    }
    if(temp==1)
        cout<<"Yes"<<endl;
    else if(temp==0)
        cout<<"No"<<endl;
    else if(s.size()==n  and s.size()!=t.size())
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
