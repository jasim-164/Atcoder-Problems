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
    lli temp,n;
    cin>>n;
    lli cnt=0;
    if(n<=10)
        cout<<cnt<<endl;
    else
    {

        for(lli i=11; i<=n; i=i*2)
        {
            lli c=0;
            vi v;
            temp=i;
            int r;
            while(temp!=0)
            {
                r=temp%10;
                v.push_back(r);
                temp=temp/10;
                c++;
            }
            if(c%2==0)
            {
                int k=v.size();
                int t=1;
                reverse(v.begin(),v.end());
                for(int i=0; i<k/2; i++)
                {
                    if(v[i]!=v[k-i-1])
                    {
                        t=0;
                        break;
                    }

                }
                if(t!=0)
                {
                    cnt++;
                    v.clear();
                }

            }
            else
            {
                i*=10;
                v.clear();
            }

        }
    }
    cout<<cnt<<endl;


    return 0;
}

