#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m;
    cin>>n>>k>>m;
    int ara[n],sum=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    if(sum/n>=m)
    {
        cout<<"0"<<endl;
        return 0;
    }
    int t=0;
    int i;
    for( i=1;i<=k;i++)
    {
        sum+=i;
        if(sum/n>=m)
        {
             t=1;
            break;
        }
        sum-=i;
    }

    if(t==1)
        cout<<i<<endl;
       else
        cout<<"-1"<<endl;
    return 0;
}

