#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t;
    cin>>n>>m>>t;
    int x,y,temp;
    int t1=0,tn=n;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        n=n-(x-t1);
        if(n<=0)
        {
            cout<<"No"<<endl;
            exit(0);
        }
        n=n+(y-x);
        if(n>tn)
        {
            n=tn;
        }
        t1=y;
    }
    n=n-(t-t1);
    if(n<=0)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
    return 0;
}
