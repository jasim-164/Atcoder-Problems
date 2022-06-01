#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
      if(s[i]==',')
            s[i]=' ';
    }
    cout<<s<<endl;

    return 0;
}

