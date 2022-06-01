#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=0;i<n-2;i++)
const lli maxn=1000005;
int main()
{
   string s;
   cin>>s;
   lli n=s.size();
   lli cnt=0;
   bool test=false;
   f(i,n)
   {
      if(s[i]==s[i+1]&&s[i+1]!=s[i+2])
      {
          s[i+2]=s[i];
           cnt++;
          test=true;
      }
    if(i==n-3)
    {
        if(test==false)
        {
            break;
        }
        else
        {
       i=0;
       test=false;
        }
    }
   }

   cout<<cnt<<endl;
    return 0;
}
