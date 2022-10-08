#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "YES"
#define no "NO"
using ll = long long;

int main() {
  ll a, b, v, w, t;
  bool flag = false;
  cin >> a >> v;
  cin >> b >> w;
  cin >> t;

  // can catch
  if (v > w) {
    ll speed = v - w;
    if (speed * t >= labs(a - b)) {
      flag = true;
    }
  }
  if (flag)
    cout << yes << endl;
  else
    cout << no << endl;
}
