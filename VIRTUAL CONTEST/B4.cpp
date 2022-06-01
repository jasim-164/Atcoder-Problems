#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int cnt=0;
    int ara[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]>=k)
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}

