#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;
int main() {
  double a, b;
  double res;
  int h, m;
  cin >> a >> b >> h >> m;

  double angle = abs((m * 6) - (h * 30 + 0.5 * m));

  res = sqrt(a * a + b * b - 2 * a * b * cos(angle * M_PI / 180.0));
  printf("%.11f\n", res);
}
