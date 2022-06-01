#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        //int odd=0,even=0;
        if(n%2==0 && n%4!=0)
        {
          cout<<"Same"<<endl;
        }
        else if(n%4==0)
        {
            cout<<"Even"<<endl;
        }
        else
        {
            cout<<"Odd"<<endl;
        }


    }
    return 0;
}
