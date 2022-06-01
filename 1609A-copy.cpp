#include <bits/stdc++.h>

using namespace std;

#define sz(x) ((int) (x).size())
typedef long long ll;
typedef long double ld;

int t, n;
ll a[20];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout << fixed << setprecision(12);
  cin >> t;
  while (t--) {
    cin >> n;
    ll p = 1, ma = 0, s = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      while (a[i] % 2 == 0)
        a[i] /= 2, p *= 2;
      ma = max(ma, a[i]);
      s += a[i];
    }
    cout << s - ma + ma * p << "\n";
  }
}
