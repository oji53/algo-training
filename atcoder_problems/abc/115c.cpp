#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
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
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  int res = INT_MAX;
  sort(all(h));

  rep2(i, 0, n - k + 1) {
    int diff;

    diff = abs(h[i] - h[i + k - 1]);
    res = min(res, diff);
  }
  cout << res << endl;
}
