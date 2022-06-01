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

    int n,m;
    cin>>n>>m;
    string s;
    vector<int>one;
    vector<int>zero;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        one.push_back((count(s.begin(),s.end(),'1')));
        zero.push_back((count(s.begin(),s.end(),'0')));
    }
   int cnt=0;
    sort(one.begin(),one.end());
    sort(zero.begin(),zero.end());
    int temp;
    for(int i=0;i<one.size()-1;i++)
    {
        if(one[i]==one[i+1])
        {
            temp=one[i];
        }

        else
        {
            if(one[i]!=temp)
            {
             if(i==one.size()-2)
                {
                     cnt+=2;
                }
                else
                {
                    cnt++;
                }
            }

        }
    }

     for(int i=0;i<zero.size()-1;i++)
    {
        if(one[i]==one[i+1])
        {
            temp=zero[i];
        }
        else
        {
            if(zero[i]!=temp)
            {
                if(i==zero.size()-2)
                {
                     cnt+=2;
                }
                else
                {
                    cnt++;
                }

            }

        }

    }
    //unordered_set<int> s1( one.begin(), one.end() );
   // one.assign( s1.begin(), s1.end() );

    //unordered_set<int> s2( zero.begin(), zero.end() );
    //zero.assign( s2.begin(), s2.end());
    //sort( vec.begin(), vec.end());
   // sort(one.begin(),one.end());
    cout<<cnt<<endl;

    return 0;
}

