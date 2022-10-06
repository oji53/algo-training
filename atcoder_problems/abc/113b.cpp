#include <bits/stdc++.h>
#include <cfloat>
#include <cmath>
using namespace std;
using ll = long long;
#define all(obj) (obj).begin(), (obj).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define yes "Yes"
#define no "No"

int main() {
  int n;
  double t, a;
  int res = 1;
  cin >> n;
  double h[n + 1];
  cin >> t >> a;
  rep2(i, 1, n + 1) cin >> h[i];

  double tmp = DBL_MAX;

  rep2(i, 1, n + 1) {
    if (abs(a - (t - h[i] * 0.006)) < tmp) {
      tmp = abs(a - (t - h[i] * 0.006));
      res = i;
    }
  }
  cout << res << endl;
}
