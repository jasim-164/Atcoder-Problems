#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 int p=200003;
 cin>>n;
 int ara[n+1];
 for(int i=0;i<n;i++)
 {
     cin>>ara[i];
 }
 int sum=0;
      for(int i=0;i<n-1;i++)
      {
             for(int j=1;j<n;j++)
             {
                 sum+=(ara[i]*ara[j])%p;
             }
      }
      cout<<sum<<endl;

    }
