#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,d;
    cin>>l>>r>>d;
    int count=0;
    for(int i=l;i<=r;i++)
    {
        if(i%d==0)
        {
            count++;
        }
    }
    cout<<count<<endl;


    return 0;
}
