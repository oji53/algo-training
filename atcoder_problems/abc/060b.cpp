#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "YES"
#define no "NO"
using ll = long long;

int main() {
  int a, b, c;
  string res;
  cin >> a >> b >> c;

  bool ok = false;

  rep2(i, 1, 202020) {
    if (a * i % b == c) {
      ok = true;
      break;
    }
  }
  if (ok)
    res = yes;
  else
    res = no;
  cout << res << endl;
}
