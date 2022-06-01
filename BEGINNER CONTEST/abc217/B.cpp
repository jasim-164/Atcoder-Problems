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
    string s[]={"ABC","ARC","AGC","AHC"};
    map<string,int>mp;
    for(int i=0;i<3;i++)
    {
        string s1;
        cin>>s1;
        mp[s1]++;

    }

    for(int i=0;i<4;i++)
    {
        int temp=-1;
        for(auto itr:mp)
        {
            if(s[i]==itr.first)
            {
                temp=1;
            }
        }
        if(temp==-1)
        {
            cout<<s[i]<<endl;
            break;
        }
    }



      return 0;
}


