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
  int x;
  cin >> x;

  int res = 1;

  rep2(i, 2, x) {
    int tmp = i * i;

    while (tmp <= x) {
      res = max(res, tmp);
      tmp *= i;
    }
  }
  cout << res << endl;
}
