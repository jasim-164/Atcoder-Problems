#include<bits/stdc++.h>
using namespace std;
void f(int n)
{int count=0;
    for(int x=1;x<=n/4;x++)
    {
     for(int y=1;y<=n/4;y++)
     {
       for(int z=1;z<=n/4;z++)
       {
    if(x*x+y*y+z*z+x*y+y*z+z*x==n)
    {
        count++;
    }
       }

     }

    }
    cout<<count<<endl;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    f(i);
    return 0;
}

