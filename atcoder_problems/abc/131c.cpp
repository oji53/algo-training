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
  ll a, b, c, d;
  ll res = 0;
  cin >> a >> b >> c >> d;

  // bまでのcとdで割り切れる数
  ll tmp = b / c + b / d - b / lcm(c, d);
  res = b - tmp;

  // (a-1)までのcとdで割り切れる数
  tmp = (a - 1) / c + (a - 1) / d - (a - 1) / lcm(c, d);
  res -= (a - 1 - tmp);

  cout << res << endl;
}
