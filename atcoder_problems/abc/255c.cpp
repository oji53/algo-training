#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <math.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;
///
int main() {
  ll a, n, x, d;
  cin >> x >> a >> d >> n;

  if (d < 0) {
    ll tmp = a + (n - 1) * d;
    a = tmp;
    d = -d;
  }

  ll st = a;
  ll fi = a + (n - 1) * d;

  ll res;
  if (st <= x && x <= fi) {
    if (d == 0) {
      res = 0;
    } else {
      res = min((x - st) % d, d - ((x - st) % d));
    }
    cout << res << endl;
  } else if (x < st) {
    cout << st - x << endl;
  } else {
    cout << x - fi << endl;
  }
}
