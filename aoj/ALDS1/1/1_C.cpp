#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

bool is_prime(int x) {
  if (x == 2)
    return true;
  if (x % 2 == 0)
    return false;

  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  int a[10101];
  int res = 0;
  cin >> n;
  rep(i, n) cin >> a[i];

  rep(i, n) if (is_prime(a[i])) res++;

  cout << res << endl;
}
