#include<bits/stdc++.h>
using namespace std;
#define lli long long int
//lli fact(lli n);
lli fact(lli n)
{
    lli res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int nCr(lli n)
{
    lli combination = fact(n) ;
    lli re=combination/(n*(n-1));  // (2 * fact(n - 2));
    combination = combination/(re*2);
    return  combination;
}
// Returns factorial of n

int main()
{
    lli n,cnt=0;
    cin>>n;
    lli ara[n+1];
    map<lli,lli>mp;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        mp[ara[i]]++;
    }
    lli sum=0;
    for(auto itr: mp)
    {
        if(itr.second>0)
        {
            sum+=(itr.second*(itr.second-1))/2;
        }
    }
    lli val=nCr(n);
    cout<<val-sum<<endl;
    return 0;
}



