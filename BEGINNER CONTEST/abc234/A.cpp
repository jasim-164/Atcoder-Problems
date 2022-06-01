#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli f(lli n)
{
    return (n*n+2*n+3);
}
int main()
{
    int n;
    cin>>n;

    lli val=f(n);
    lli val1=f(val);
    lli val2=f(val+n);
    lli rslt=f(val1+val2);

    cout<<rslt<<endl;
    return 0;
}
