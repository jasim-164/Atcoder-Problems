#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,q;
    cin>>n;
    string s;
    cin>>s;
    int len=s.size();
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int t,a,b;
        cin>>t>>a>>b;
        if(t==1)
        {
            swap(s[a-1],s[b-1]);
        }
        if(t==2)
        {
            for(int i=0;i<n;i++)
            {
                swap(s[i],s[i+len-n]);
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
