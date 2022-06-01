#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ara[n+2];
    for(int i=1;i<=n;i++)
    {
        cin>>ara[i];
    }
    int count=0;

    for(int i=1;i<=n;i++)
    {
        if((ara[i]%2)==1&&(i%2)==1)
        {
                count++;
        }
    }
    cout<<count<<endl;

    return 0;

}
