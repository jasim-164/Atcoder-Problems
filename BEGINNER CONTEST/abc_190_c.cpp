#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m;
    int a[105],b[105],c[105],d[105];
   for(int i=0;i<m;i++)
   {
       cin>>a[i]>>b[i];
   }
     cin>>k;
     for(int i=0;i<k;i++)
   {
       cin>>c[i]>>d[i];
   }
   int cnt=0;
   for(int i=0;i<n;i++)
   {
       if((a[i]>=c[i]&&b[i]>=c[i])||(a[i]>=d[i]&&b[i]>=d[i]))
        cnt++;
   }
   cout<<cnt<<endl;

    return 0;
}


