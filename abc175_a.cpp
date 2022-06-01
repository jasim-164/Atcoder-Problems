#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int min_=-1;
   int temp=0;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='R')
       {
           temp++;
       }
       else
       {
           if(temp>min_)
           {
               min_=temp;
               temp=0;
           }
       }
   }
   cout<<min_<<endl;

    return 0;
}
