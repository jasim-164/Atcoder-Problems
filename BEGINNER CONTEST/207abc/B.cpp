#include<bits/stdc++.h>
//using namespace std;
#include <cmath>
#include <set>
#include <map>
#include <stdio.h>
#include <stdlib.h>
//using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, s, t) for (int i = (int)s; i <= (int)(t); i++)
#define INF64 9223372036854775807
#define INF32 2147483647
#define fi first
#define se second
typedef long long ll;
using sll = int64_t;
using ull = unsigned long long;
using ll = long long;

const int mod = 1000000007;
ll myceil(ll a, ll b) { return (a + (b - 1)) / b; }
ll myfloor(ll a, ll b) { return a / b; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
ll gcd(ll a, ll b) {
    if (b == 0)return a;
    return gcd(b, a % b);
}
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int blue = a;
    int red = 0;
    repi(i, 1, a) {
        blue += b;
        red += c;
        if (blue <= red * d) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
