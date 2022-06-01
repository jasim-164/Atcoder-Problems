#include<bits/stdc++.h>
using namespace std;
using lli=long long int;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x-y>=0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        lli val=y-x;
        if(val%10==0)
            cout<<val/10<<endl;
        else
            cout<<(val/10 +1)<<endl;
    }
    return 0;
}
