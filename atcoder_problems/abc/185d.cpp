#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a;

  if (m == 0) {
    cout << 1 << endl;
    return 0;
  }

  rep(i, m) {
    int t;
    cin >> t;
    a.push_back(t);
  }
  if (n == m) {
    cout << 0 << endl;
    return 0;
  }

  // 一番右と左に青色マスを追加
  a.push_back(0);
  a.push_back(n + 1);
  sort(all(a));

  int k = INT_MAX;
  int res = 0;

  rep(i, m + 1) {
    int t = a[i + 1] - a[i];
    t--;
    if (t > 0)
      k = min(k, t);
  }

  rep(i, m + 1) {
    int t = a[i + 1] - a[i];
    t--;
    if (t > 0) {
      res += ceil(double(t) / (double)k);
    }
  }

  cout << res << endl;
}
