#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
   /* map<pair<int,int>,pair<int,int>>mp;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x,y,a,b;
        char c;
        cin>>x>>y>>a>>b;
        mp[{x,y}].insert({a,b});
    }*/
    map<int,int>mp;
    for(int i=1;i<10;i++)
    {
        int x,y;
        cin>>x>>y;
        mp.insert({x,y});
    }

    return 0;
}
