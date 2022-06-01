#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli>    vi;
typedef pair<lli,lli>  ii;
typedef vector<ii>     vii;
#define f(i,n) for(int i=0;i<n;i++)
const lli maxn=1000005;
int main()
{
    lli n;
    string s;
    cin>>s;
    int len=s.size();
    int t=1;
    for(int i=0;i<len;i++)
    {

        if(s[i]!=s[len-i-1])
        {
            t=0;
            break;
        }
    }
    if(t)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    int b=0;
    for(int i=len-1;i>=0;i--)
    {
        if(s[i]=='0')
            b++;
        else
            break;

    }
    int f=0;
      for(int i=0;i<=len-1;i++)
    {
        if(s[i]=='0')
            f++;
        else
            break;

    }
    if(b>f && f==0)
    {
       int p=len-b;
       bool b=true;
       for(int i=f;i<len-b;i++)
       {
           if(s[i]!=s[len-b-i-1])
           {
               b=false;
               break;
           }
       }
       if(b)
          {
            cout<<"Yes"<<endl;
            return 0;
          }
       else
        {
        cout<<"No"<<endl;
        return 0;
        }

    }
       else if(b>f && f>=0)
    {
       int p=len-b;
       bool b=true;
       for(int i=f;i<len-b;i++)
       {
           if(s[i]!=s[len-b-i])
           {
               b=false;
               break;
           }
       }
       if(b)
          {
            cout<<"Yes"<<endl;
            return 0;
          }
       else
        {
        cout<<"No"<<endl;
        return 0;
        }

    }
    cout<<"No"<<endl;


    return 0;
}

