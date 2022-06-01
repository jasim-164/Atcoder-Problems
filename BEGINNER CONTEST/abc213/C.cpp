#include <bits/stdc++.h>

using namespace std;

pair <int, int> a[100005];

int main()
{
    int h, w, n;
    scanf("%d%d%d", &h, &w, &n);

    vector<int> x, y;

    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &a[i].first, &a[i].second);
        x.push_back(a[i].first);
        y.push_back(a[i].second);
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    x.resize(unique(x.begin(), x.end()) - x.begin());
    y.resize(unique(y.begin(), y.end()) - y.begin());

    for (int i = 0; i < n; i++)
    {
        int xx = lower_bound(x.begin(), x.end(), a[i].first) - x.begin() + 1;
        int yy = lower_bound(y.begin(), y.end(), a[i].second) - y.begin() + 1;
        printf("%d %d\n", xx, yy);
    }
}
