#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int A,B,C,N;
    cin>>N;
    long long int ans=0;
    for( A=1 ; A*A*A<=N;A++)//using pow() is dangerous so I dont use pow() then accepted
	for( B=A ; A*B*B<=N;B++)
       ans+=floor(N/(A*B))-B+1;

    cout<<ans<<endl;
    return 0;
}
