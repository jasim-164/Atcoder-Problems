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
    cin>>n>>t;
    string s;
    cin>>s;
    int cnt=0;
       f(i,0,n-3)
        {
            if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c')
            {
                cnt++;
            }
        }
    while(t--)
    {
        int a;
        char c;
        cin>>a>>c;
        //s[a-1]=c;
        if(n<3)
        {
            cout<<"0"<<endl;
        }
        else
        {

        if(a==1)
        {
        int cnt1=0;
        f(i,0,2)
        {

            if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c')
            {

                if(s[0]!=c)
                {
                   cnt--;
                }

            }
             cout<<cnt<<endl;
        }
        }
                if(a==2)
        {
        int cnt1=0;
        f(i,0,2+(2-1))
        {

            if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c')
            {

                if(s[0]!=c)
                {
                   cnt--;
                }

            }
             cout<<cnt<<endl;
        }
        }
            if(a>=3)
        {
        int cnt1=0;
        f(i,a-3,a+1)
        {

            if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c')
            {

                if(s[0]!=c)
                {
                   cnt--;
                }

            }
             cout<<cnt<<endl;
        }
        }

        }
    }
    return 0;
}


