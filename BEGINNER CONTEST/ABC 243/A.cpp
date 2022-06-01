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
    char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    lli a,b,c,v;
    cin>>v>>a>>b>>c;
    lli i=v%(a+b+c);
    if(i<a)
    {
        cout<<"F"<<endl;
    }
    else if(i<a+b)
    {
        cout<<"M"<<endl;
    }
    else
    {
        cout<<"T"<<endl;
    }

    return 0;
}


