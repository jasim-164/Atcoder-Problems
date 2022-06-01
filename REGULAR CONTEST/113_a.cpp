#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=1;i<=n;i++)
const lli maxn=1000005;
int main()
{
   lli n;
   cin>>n;
   lli t=1,cnt=0;
   f(i,n)
   {
       f(j,n)
       {
           if(i*j>n)
           {
           break;
           t=0;
           }
           f(k,n)
           {
               if(i*j*k<=n)
               {
                   cnt++;
               }
               else
               {
                   break;
               }
           }
       }
       if(t==0)
        break;
   }
   cout<<cnt<<endl;

    return 0;
}
