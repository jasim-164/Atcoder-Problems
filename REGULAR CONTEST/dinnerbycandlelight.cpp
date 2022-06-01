#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
       long long int a,y,x;
       cin>>a>>y>>x;
       if(y==a)
       {
           cout<<a*x<<endl;
       }
       else if(y>a)
       {
           cout<<(a*x)+1<<endl;
       }
       else
       {

            long long int rslt=y*x;
           cout<<rslt<<endl;
       }
    }

    return 0;
}

