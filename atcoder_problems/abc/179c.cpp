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
  int a, b, c;
  ll res = 0;
  cin >> n;
  bool flag = false;
  for (int i = 1; i * i <= n; i++) {
    rep2(j, i, n) {
      if (i * j >= n) {
        break;
      } else {
        if (i != j)
          res += 2;
        else
          res += 1;
      }
    }
  }
  cout << res << endl;
}
