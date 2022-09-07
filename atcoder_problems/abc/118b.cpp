#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(obj) (obj).begin(), (obj).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  int n, m;
  int foods[35] = {0};
  int res = 0;
  cin >> n >> m;

  rep(i, n) {
    int k;
    cin >> k;
    rep(j, k) {
      int a;
      cin >> a;
      foods[a] += 1;
    }
  }

  rep2(i, 1, m + 1) {
    if (foods[i] == n)
      res += 1;
  }

  cout << res << endl;
}
