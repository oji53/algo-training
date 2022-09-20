#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
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
  int n, m;
  int t[101010];
  int p[105];
  int x[101010];
  ll sum = 0;
  ll res = 0;

  cin >> n;
  rep2(i, 1, n + 1) cin >> t[i];
  cin >> m;
  rep2(i, 1, m + 1) cin >> p[i] >> x[i];

  rep2(i, 1, n + 1) sum += t[i];

  rep2(i, 1, m + 1) {
    res = sum - t[p[i]] + x[i];
    cout << res << endl;
  }
}
