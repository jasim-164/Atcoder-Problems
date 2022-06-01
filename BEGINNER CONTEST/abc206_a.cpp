#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double rslt=n*1.08;
    rslt=(int)rslt;
    if(rslt<206)cout<<"Yay!"<<endl;
    else if(rslt==206)cout<<"so-so"<<endl;
    else
    {
        cout<<":("<<endl;
    }
    return 0;
}

