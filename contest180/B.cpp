#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double ara[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    double sum=0,sum1=0;
        for(int i=0;i<n;i++)
        {
           sum+=abs(ara[i]) ;
           sum1+=pow(ara[i],2);
        }
         cout<<sum<<endl;
         int precision = std::numeric_limits<double>::max_digits10;
        std::cout << std::fixed << std::setprecision(precision) <<sqrt(sum1)<< std::endl;

        double val=INT_MIN;
         for(int i=0;i<n;i++)
         {
             if(abs(ara[i])>val)
             {
                 val=abs(ara[i]);
             }
         }
        cout<<val<<endl;
    return 0;
}

