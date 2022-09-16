#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <numeric>
#include <vector>
using namespace std;
using ll = long long;
#define all(obj) (obj).begin(), (obj).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  int n;
  ll k;
  cin >> n >> k;
  vector<int> a(n);
  vector<int> idx(n);
  long long res[200005] = {0};

  rep(i, n) cin >> a[i];

  iota(all(idx), 0);
  sort(all(idx), [&](int i, int j) { return a[i] < a[j]; });

  if ((k / n) > 0) {
    rep(j, n) res[j] += (k / n);
    k -= (k / n) * n;
  }
    
  rep(j, n) {
    if (k > 0) {
      res[idx[j]] += 1;
      k -= 1;
    } else
      break;
  }

  rep(i, n) cout << res[i] << endl;
}
