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
    lli n=s.size();
    lli odd=0,even =0;
    f(i,n)
    {
        if((i+1)%2!=0)
        {
       if(s[i]>=97&&s[i]<=122)
        {
            odd++;
        }
        }
        else{
            if(s[i]>=65&&s[i]<=90)
        {
            even++;
        }
        }
    }
    if(n%2==0)
    {
        if(odd==n/2&&even==n/2)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else{
        if(odd==(n/2+1)&&even==n/2)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
