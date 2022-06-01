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
    map<string,int>mp;
    vector<int>v;
    int m=-1;
    f(i,n)
    {
        string s;
        int p;
        cin>>s>>p;
        mp[s]=p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    for(auto itr:mp)
    {
        if(itr.second==v[n-2])
            cout<<itr.first<<endl;
    }

    return 0;
}

