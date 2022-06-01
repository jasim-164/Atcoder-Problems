#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[5];

    for(int i=0;i<4;i++)
    {
        cin>>ara[i];

    }
     int min_=ara[0];
      for(int i=1;i<4;i++)
      {
          if(min_>ara[i])
          {
              min_=ara[i];
          }
      }
      cout<<min_<<endl;
}
