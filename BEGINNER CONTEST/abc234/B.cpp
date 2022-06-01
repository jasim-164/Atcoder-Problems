#include<bits/stdc++.h>
using namespace std;
#define lli long long int
double f(vector<pair<int,int>>v,int n,int i,int j)
{
    int dx=abs(v[i].first-v[j].first);
    int dy=abs(v[i].second-v[j].second);
    double dist=sqrt(pow(dx,2)+pow(dy,2));
    return dist;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
      int x,y;
      cin>>x>>y;
      v.push_back({x,y});

    }
    double ans=-1.0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            {
               double val=f(v,n,i,j);
               ans=max(ans,val);
            }
    }
    cout<<std::setprecision(14)<<ans<<endl;


    return 0;
}

