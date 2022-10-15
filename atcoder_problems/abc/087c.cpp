#include <algorithm>
#include <bits/stdc++.h>
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
  int n;
  int res = 0;
  cin >> n;
  vector<vector<int>> a(2, vector<int>(105));
  // int a[2][105];

  rep(i, 2) {
    rep(j, n) { cin >> a[i][j]; }
  }

  rep(i, n) {
    int t = 0;
    int y = 0;
    rep(j, n) {
      if (i == j) {
        t += a[y][j];
        y++;
      }
      t += a[y][j];

      if (j == n - 1) {
        res = max(res, t);
      }
    }
  }

  cout << res << endl;
}
