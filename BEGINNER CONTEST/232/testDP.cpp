
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int h, w;
  cin >> h >> w;
  vector<string> g(h);
  for (int i = 0; i < h; i++) {
    cin >> g[i];
  }
  vector<vector<int>> f(h, vector<int>(w));//bottom to top approach
  for (int i = h - 1; i >= 0; i--) {
    for (int j = w - 1; j >= 0; j--) {
      if (g[i][j] == '#') {
        f[i][j] = 0;
      } else {
        f[i][j] = 1;
        if (i + 1 < h && g[i + 1][j] == '.') {
          f[i][j] = max(f[i][j], f[i + 1][j] + 1);
        }
        if (j + 1 < w && g[i][j + 1] == '.') {
          f[i][j] = max(f[i][j], f[i][j + 1] + 1);
        }
      }
    }
  }
  cout << f[0][0] << '\n';
  return 0;
}
