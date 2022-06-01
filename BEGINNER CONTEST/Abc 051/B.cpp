#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int k,s;
    cin>>k>>s;
    lli cnt=0;
    for(int i=0;i<=k;i++)
    {
      for(int j=0;j<=k;j++)
      {
            if(i+j>s)
            break;
            if(k>=s-i-j)
                cnt++;
      }
    }
    cout<<cnt<<endl;

    return 0;
}


