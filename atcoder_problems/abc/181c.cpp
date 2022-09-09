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

  double x[105];
  double y[105];
  string res = no;
  cin >> n;
  rep(i, n) cin >> x[i] >> y[i];

  rep2(i, 0, n) {
    rep2(j, i + 1, n) {
      rep2(k, j + 1, n) {
        if (x[i] != x[j]) {
          double a = (y[j] - y[i]) / (x[j] - x[i]);
          if (y[k] == (a * (x[k] - x[i]) + y[i]))
            res = yes;
        } else {
          if (x[k] == x[j])
            res = yes;
        }
      }
    }
  }
  cout << res << endl;
}
