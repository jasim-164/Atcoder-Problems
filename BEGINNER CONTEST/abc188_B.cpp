#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b,n,sum=0;
     cin>>n;
     long long int ara[n+1],ara1[n+1];
     for(int i=0;i<n;i++)
     {
         cin>>ara[i];
     }
      for(int i=0;i<n;i++)
     {
         cin>>ara1[i];
     }
      for(int i=0;i<n;i++)
     {
         sum+=ara[i]*ara1[i];
     }
     if(sum==0)
     {
         cout<<"Yes"<<endl;
     }
     else{
        cout<<"No"<<endl;
     }
    return 0;
}

