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
    int t,n;

        cin>>n;
        string s;
        cin>>s;
        f(i,n)
        {
            if(s[i]=='1')
            {
                if(i%2==0)
                    cout<<"Takahashi"<<endl;
                else
                {
                    cout<<"Aoki"<<endl;
                }
                break;
            }
        }
    return 0;
}

