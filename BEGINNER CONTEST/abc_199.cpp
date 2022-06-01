#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],b[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
     for(int i=0;i<n;i++)
        cin>>b[i];
        //bool test=true;
        int cnt=0;
      for(int i=1;i<=1000;i++)
      {   bool test=true;
          for(int j=0;j<n;j++)
          {
              if(i<a[j]||i>b[j])
                test=false;
          }
          if(test)
            cnt++;
      }
      cout<<cnt<<endl;


    return 0;
}
