#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,count=0;
    cin>>x>>y;
    while(x!=y)
    {
        if(x>y)
        {
            x=x-1;
            count++;
        }
        else if(2*x>=y)
        {
            if((2*x-y)>(y-x))
            {
            x=x+1;
            count++;
            }
            else{
                x=x*2;
                count++;

            }

        }
        else{
            x=2*x;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}

