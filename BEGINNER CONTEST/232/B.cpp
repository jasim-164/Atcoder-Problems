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

    char alphabet []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string s,t;
    cin>>s>>t;
    int val=0;
    if((t[0]-s[0])<0)
    {
       val+=(t[0]-'a'+1);
       val+=('z'-s[0]);
    }
    else
    val=(t[0]-s[0]);

    bool b=true;
    lli n=s.size();
    for(int i=1;i<n;i++)
    {
        int rslt=0;
       if((t[i]-s[i])<0)
      {
       rslt=int(t[i]-'a'+1);
      // cout<<rslt<<endl;
       rslt+=('z'-s[i]);
      // cout<<rslt<<endl;
      }
      else
      {
          rslt=(t[i]-s[i]);
      }
//cout<<rslt<<" "<<val<<endl;
         if(val==rslt)
        {
            b=true;
        }
        else
        {
            b=false;
            break;
        }
    }
    if(b)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;

    return 0;
}


