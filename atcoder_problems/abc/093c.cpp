#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;

int main() {
  vector<int> a(3);
  rep(i, 3) cin >> a[i];
  int ans = 0;

  sort(all(a));
  int max_num = a[2];

  if ((2 * a[2] - a[1] - a[0]) % 2 != 0)
    max_num += 1;

  while (true) {
    if (a[0] == max_num && a[1] == max_num && a[2] == max_num)
      break;
    sort(all(a));
    if (a[2] != max_num) {
      a[0] += 1;
      a[2] += 1;
    } else {
      if (a[0] != a[1]) {
        a[0] += 2;
      } else {
        a[0] += 1;
        a[1] += 1;
      }
    }
    ans += 1;
  }
  cout << ans << endl;
}
