#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n+1];
    for(int i=0;i<n;i++)
        cin>>ara[i];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(ara[i]>10)
            sum+=(ara[i]-10);
    }
    cout<<sum<<endl;

    return 0;
}
