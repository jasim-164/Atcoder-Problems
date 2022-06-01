#include<bits/stdc++.h>
using namespace std;
bool is(string s)
{
    string t=s;
    reverse(t.begin(),t.end());
    if(s==t)
        return 1;
    else
        return 0;
}
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<10;i++)
    {
        if(is(s))
        {
            cout<<"Yes"<<endl;
            return 0;
        }
        s='0'+s;
    }
    cout<<"No"<<endl;
}
