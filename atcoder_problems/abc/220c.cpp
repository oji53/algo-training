#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <numeric>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  int n;
  ll x;
  int a[101010];
  ll res;
  ll sum = 0;
  cin >> n;
  rep(i, n) cin >> a[i];
  cin >> x;

  rep(i, n) sum += a[i];

  ll q = x / sum;
  res = q * n;

  ll count = sum * q;

  rep(i, n) {

    if (count > x) {
      break;
    }
    res++;
    count += a[i];
  }

  cout << res << endl;
}
