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
  int X;

  bool flag = true;
  cin >> X;

  int a = X / 100;

  if (a == 0) {
    flag = false;
  } else {
    if (5 * a < (X - 100 * a))
      flag = false;
  }

  if (flag)
    cout << 1 << endl;
  else
    cout << 0 << endl;
}
