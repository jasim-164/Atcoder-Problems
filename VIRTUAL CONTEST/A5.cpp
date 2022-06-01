#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;

   int cnt=0;
   for(int i=0;s[i];i++)
   {
       if(s[i]=='+')
        cnt++;
       else
        cnt--;
   }
   cout<<cnt<<endl;
    return 0;
}

