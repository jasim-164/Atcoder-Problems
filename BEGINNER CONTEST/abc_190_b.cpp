#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,d;
    cin>>n>>s>>d;
    //cin>>n;
    map<int,int>mp;
    int xi,yi;
    bool t=false;
    int ara1[105],ara2[105];
   for(int i=0;i<n;i++)
   {
       cin>>xi>>yi;
       ara1[i]=xi;
       ara2[i]=yi;
  if( ara1[i]<s && ara2[i]>d )
       {
           t=true;
       }
   }
  /* for(auto it=mp.begin();it!=mp.end();it++)
   {
       if(it->first<s && it->second>d)
       {
           t=true;
           break;
       }
   }*/
   if(t==true) cout<<"Yes"<<endl;
   else cout<<"No"<<endl;

    return 0;
}

