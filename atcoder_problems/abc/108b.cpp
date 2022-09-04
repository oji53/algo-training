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
  int x1, y1, x2, y2;

  cin >> x1 >> y1 >> x2 >> y2;

  int x = x2, y = y2;

  int dx = x2 - x1, dy = y2 - y1;

  rep(i, 2) {
    int _dx = -dy;
    int _dy = dx;
    dx = _dx;
    dy = _dy;

    x = x + dx;
    y = y + dy;

    cout << x << " " << y;
    if (i == 0)
      cout << " ";
  }
  cout << endl;
}
