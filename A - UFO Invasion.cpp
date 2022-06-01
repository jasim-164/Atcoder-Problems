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
      string pat="ZONe";
      int len=12;
      int cnt=0;
      for(int i=0;i<=12-4;i++)
      {
          int j;
         for(j=0;j<4;j++)
         {
             if(s[i+j]!=pat[j])
             {
                 break;
             }
         }
         if(j==4)
         {
             cnt++;
         }
      }
      cout<<cnt<<endl;
    return 0;
}

