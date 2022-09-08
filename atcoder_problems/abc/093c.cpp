#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
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
  int a[n + 1];
  ll sum = 0;

  a[0] = 0;
  rep2(i, 1, n + 1) cin >> a[i];
  rep2(i, 0, n + 1) {
    if (i == n)
      sum += abs(a[i] - a[0]);
    else
      sum += abs(a[i] - a[i + 1]);
  }

  rep2(i, 1, n + 1) {
    ll res = 0;
    if (i != n) {
      res = sum - abs(a[i] - a[i - 1]) - abs(a[i] - a[i + 1]) +
            abs(a[i - 1] - a[i + 1]);

      // cout << sum - abs(a[i] - a[i - 1]) - abs(a[i] - a[i + 1]) +
      //             abs(a[i - 1] - a[i + 1])
      //      << endl;
    } else {
      res =
          sum - abs(a[i] - a[i - 1]) - abs(a[i] - a[0]) + abs(a[i - 1] - a[0]);
      // cout << sum - abs(a[i] - a[i - 1]) - abs(a[i] - a[0]) +
      //             abs(a[i - 1] - a[0])
      // << endl;
    }
    printf("%lld\n", res);
  }
}
