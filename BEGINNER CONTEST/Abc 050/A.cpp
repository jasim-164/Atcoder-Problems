#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli A,B;
    char c;
    cin>>A>>c>>B;
    int p=0,n=0,t=0;

    if(c=='+')
    {
        int ans=A+B;
        cout<<ans<<endl;
    }
    else
    {
        int ans=A-B;
        cout<<ans<<endl;
    }
    return 0;
}
