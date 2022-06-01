#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s1,s2,s3;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s1>>s2>>s3;
        string s="";
        for(int i=0;i<n;i++)
        {
            s+='0';
        }
        for(int i=0;i<n;i++)
        {
            s+='1';
        }
        s+='0';
        cout<<s<<endl;
    }
    return 0;
}
