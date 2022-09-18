#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <functional>
#include <set>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  int res = 0;
  string s[20];

  rep(i, n) cin >> s[i];

  for (int i = 0; i < (1 << n); i++) {
    vector<int> sum(26);
    rep(j, n) {
      if ((i >> j) & 1) {
        rep(k, s[j].size()) sum[s[j][k] - 'a']++;
      }
    }

    int tmp = 0;
    rep(j, 26) if (sum[j] == k) tmp++;
    res = max(tmp, res);
  }

  cout << res << endl;
}
