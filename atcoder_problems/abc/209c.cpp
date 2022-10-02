#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(obj) (obj).begin(), (obj).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define yes "Yes"
#define no "No"

int main() {
  int n;

  cin >> n;

  ll res = 1;
  int c[n];
  rep(i, n) cin >> c[i];

  sort(c, c + n);

  rep(i, n) {
    if (c[i] - i <= 0) {
      res = 0;
      break;
    }
    res = res * (c[i] - i);
    res %= 1000000007;
  }
  cout << res << endl;
}
