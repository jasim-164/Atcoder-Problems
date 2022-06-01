#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	string ans;
	while(n){
		if(n & 1){
			--n;
			ans.push_back('A');
		}
		else{
			n/=2;
			ans.push_back('B');
		}
	}
	reverse(ans.begin(),ans.end());
	cout << ans << endl;
}
