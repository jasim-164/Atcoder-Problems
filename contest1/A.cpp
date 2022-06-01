#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    long double ara[n+1];
    long double num;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    int count=0,int_val;
    for(int i=0;i<n-1;i++)
    {
       for(int j=1;j<n;j++)
       {

           if(i<j)
           {
               num=ara[i]*ara[j];
               int_val=int(num);


               if(int_val==num)
               {
                   //cout<<ara[i]<<"."<<ara[j]<<" "<<num<<endl;
                   count++;
               }
           }
       }
    }
    cout<<count<<endl;
    return 0;
}
