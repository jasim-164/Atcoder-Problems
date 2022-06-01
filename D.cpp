#include<bits/stdc++.h>
using namespace std;

    int popcount(int n)
{

    int count = 0, i = 1;

    while (1) {
        if (n >= ((1 << i) - 1))
            count++;
        else
            break;
        i++;
    }

    return count;
}


int f(int n)
{
    int q=popcount(n);
    cout<<q<<endl;
    if(n==0)
    {
        return 0;
    }

    return f(n%q);
}
int main()
{
    int n;
    string x;
    cin>>n>>x;
    f(n);


    return 0;
}
