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
    int n;
    cin>>n;
    string s[1001];
    string t[1001];
    for(int i=1; i<=n; i++)
        cin>>s[i]>>t[i];
    int test=1;
    for(int i=1; i<=n-1;i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(s[i]==s[j] && t[i]== t[j])
            {
                cout<<"Yes"<<endl;
                test=0;
                break;
            }
        }
        if(!test)
            break;
    }
    if(test)
        cout<<"No"<<endl;

    return 0;
}


