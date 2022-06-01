#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c,d;
    cin>>c>>d;
    if(c>d)
    {
        cout<<">"<<endl;
    }
    else if(c<d)
    {
        cout<<"<"<<endl;
    }
    else
    {
        cout<<"="<<endl;
    }

    return 0;
}
