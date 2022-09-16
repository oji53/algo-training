#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(obj) (obj).begin(), (obj).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define yes "Yes"
#define no "No"

int main() {
  int a, b, c;
  int x, y;
  ll res = 0;
  cin >> a >> b >> c >> x >> y;

  if (a + b > 2 * c) {
    int tmp = min(x, y);
    x -= tmp;
    y -= tmp;
    res += 2 * tmp * c;
    if (x != 0) {
      if (a > 2 * c)
        res += 2 * x * c;
      else
        res += a * x;
    } else {
      if (b > 2 * c)
        res += 2 * y * c;
      else
        res += b * y;
    }
  } else {
    res += x * a + y * b;
  }
  cout << res << endl;
}
