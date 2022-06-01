#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[n+1][n+1],t[n+1][n+1],t1[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>s[i][j];
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>t1[i][j];
        }
    }
    //counter clockwise
    int p=1;
    for(int j=n;j>=1;j--)
    {
        for(int i=1;i<=n;i++)
        {
            t[p][i]=s[i][j];
            //cout<<t[p][i]<<" "<<p <<i ;
        }
        //cout<<endl;
        p++;
    }
    bool b=true;

        for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(t[i][j]!=t1[i][j])
            {
                b=false;
                break;
            }

        }
        if(!b)
            break;
    }
    if(b)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    //clockwise
    p=1;
    for(int j=1;j<=n;j++)
    {
        int q=1;
        for(int i=n;i>=1;i--)
        {
            t[p][q]=s[i][j];
            //cout<<t[p][q]<<" "<<p<<" "<<q ;
            q++;
        }
        //cout<<endl;
        p++;
    }
     b=true;

        for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            /*if(t[i][j]!=t1[i][j])
            {
                b=false;
                break;
            }*/
            cout<<t[i][j];

        }
        cout<<endl;
        //if(!b)
           // break;
    }
   /* if(b)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    else
        cout<<"No"<<endl;*/

    return 0;
}
