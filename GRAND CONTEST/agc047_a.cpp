#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double ara[n+1];
    for(int i=0;i<n;i++)
        cin>>ara[i];

    int cnt=0,int_val;
    long double num;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
             num=ara[i]*ara[j];
               int_val=int(num);


               if(int_val==num)
               {
                   //cout<<ara[i]<<"."<<ara[j]<<" "<<num<<endl;
                   cnt++;
               }
        }

    }
    cout<<cnt<<endl;

    return 0;
}
