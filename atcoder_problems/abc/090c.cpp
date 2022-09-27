#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <future>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;
//
int main() {
  ll n, m;
  ll res = 0;
  cin >> n >> m;
  if (n > m)
    swap(n, m);

  if (n == 1) {
    if (m == 1)
      res = 1;
    else
      res = m - 2;
  } else {
    res = (m - 2) * (n - 2);
  }
  cout << res << endl;
}
