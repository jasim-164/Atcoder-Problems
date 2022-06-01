#include<bits/stdc++.h>
using namespace std;
using lli=long long int;
int main()
{
    int x,y;
    cin>>x>>y;
    x--;
    y--;
    string s;
    cin>>s;
    lli n=s.size();
    int d=y-x;
    d=(d)/2;
    for(int i=x;i<=d+x;i++)
    {
       swap(s[i],s[y]);
       y--;
    }
    cout<<s<<endl;

    return 0;
}

