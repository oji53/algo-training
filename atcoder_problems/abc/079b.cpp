#include <bits/stdc++.h>
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
  ll res;

  ll prev = 1;
  ll prev_prev = 2;

  if (n == 1) {
    cout << 1 << endl;
  } else {
    rep(i, n - 1) {

      res = prev + prev_prev;
      prev_prev = prev;
      prev = res;
    }
    cout << res << endl;
  }
}
