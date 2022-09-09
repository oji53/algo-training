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
  int n, x;
  int v[1005];
  int p[1005];
  int res = -1;
  int sum = 0;
  cin >> n >> x;
  rep2(i, 1, n + 1) cin >> v[i] >> p[i];

  rep2(i, 1, n + 1) {
    sum += v[i] * p[i];
    if (sum > x * 100) {
      res = i;
      break;
    }
  }
  cout << res << endl;
}
