#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    while(1)
    {
        c=c-b;
        if(c<=0)
        {
            cout<<"Yes"<<endl;
            break;
        }
        a=a-d;
        if(a<=0)
        {
            cout<<"No"<<endl;
            break;

        }

    }
    return 0;
}

