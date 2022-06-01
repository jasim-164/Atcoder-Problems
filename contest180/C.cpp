#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    for(long long int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                cout<<i<<endl;
            }
            else{
                cout<<i<<endl;
                cout<<n/i<<endl;
            }
        }

    }
    return 0;
}

