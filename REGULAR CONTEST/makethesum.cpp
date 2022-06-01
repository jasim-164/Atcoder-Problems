#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ara[n+1];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
        if(sum%2==0)
            cout<<"0"<<endl;
        else
        {
        int cnt=0;
        int t=0;
        for(int i=0;i<n;i++)
        {
           int p=max(0,((ara[i]+1)/2)-1);
           if( p==0 && ara[i]!=1)
           {
              cnt++;
              t=1;
              break;
           }
        }
         if(t==1)
            cout<<cnt<<endl;
        else
            cout<<"-1"<<endl;
       }
    }

    return 0;
}
