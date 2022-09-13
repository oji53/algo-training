#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  int n;
  cin >> n;
  int r[n];
  int res = -INT_MAX;
  rep(i, n) cin >> r[i];

  int minv = r[0];
  rep2(i, 1, n) {
    res = max(res, r[i] - minv);
    minv = min(minv, r[i]);
  }

  cout << res << endl;
}
