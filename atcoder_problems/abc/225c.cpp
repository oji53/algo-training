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
  int n, m;
  int b[10004][8];

  cin >> n >> m;
  rep2(i, 1, n + 1) {
    rep2(j, 1, m + 1) { cin >> b[i][j]; }
  }

  int tmp = b[1][1];

  // if ((tmp % 7 + m - 1) > 7) {
  //   cout << "No" << endl;
  //   return 0;
  // }

  rep2(i, 1, n + 1) {
    rep2(j, 1, m) {
      if (b[i][j] % 7 == 0) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  rep2(i, 1, n + 1) {
    rep2(j, 1, m + 1) {
      if (tmp != b[i][j]) {
        cout << "No" << endl;
        return 0;
      }
      if (j != m)
        tmp += 1;
    }
    tmp += (7 - m + 1);
  }

  cout << "Yes" << endl;
}
