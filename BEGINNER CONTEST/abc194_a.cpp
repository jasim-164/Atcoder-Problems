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
 int a,b;
 cin>>a>>b;
 int sum=a+b;
 if(sum>=15 &&b>=8)
    cout<<"1"<<endl;
 else if(sum>=10 && b>=3)
    cout<<"2"<<endl;
  else if(sum>=3)
    cout<<"3"<<endl;
    else
        cout<<"4"<<endl;
    return 0;
}

