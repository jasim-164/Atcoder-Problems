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
    string s;
    cin>>s;
    int n=s.size();
    f(i,n)
    {
        if(s[i]!='.')
            cout<<s[i];
        else
            break;
    }
    cout<<endl;

    return 0;
}

