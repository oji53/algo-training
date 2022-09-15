#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  int n, w;
  ll res = 0;
  cin >> n >> w;
  vector<int> a(n);
  vector<int> b(n);
  vector<int> order(n);

  iota(all(order), 0);

  rep(i, n) { cin >> a[i] >> b[i]; }

  sort(all(order), [&](int i, int j) { return a[i] > a[j]; });

  rep(i, n) {
    ll tmp = min(b[order[i]], w);
    res += tmp * a[order[i]];
    w -= tmp;
    if (w == 0)
      break;
  }

  cout << res << endl;
}
