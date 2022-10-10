#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  int n, T;
  cin >> n >> T;

  ll res = 0;
  int t[202020];
  rep(i, n) cin >> t[i];

  rep(i, n - 1) {
    if ((t[i + 1] - t[i]) > T) {
      res += T;
    } else {
      res += (t[i + 1] - t[i]);
    }
  }
  res += T;
  cout << res << endl;
}
