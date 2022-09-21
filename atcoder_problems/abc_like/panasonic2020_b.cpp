#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <math.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  ll res;
  ll h, w;
  cin >> h >> w;

  res = (h * w) / 2;
  if (h % 2 == 1 && w % 2 == 1)
    res++;
  if (h == 1 || w == 1)
    res = 1;

  cout << res << endl;
}
