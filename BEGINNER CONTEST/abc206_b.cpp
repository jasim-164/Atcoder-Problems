#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli n,cnt=0;
    cin>>n;
    for(;;)
    {
       cnt++;
       n-=cnt;
       if(n<=0)
       {
           break;
       }
    }
    cout<<cnt<<endl;
    return 0;
}


