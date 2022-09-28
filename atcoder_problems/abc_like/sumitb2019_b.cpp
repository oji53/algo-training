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
  int n;
  int x = 0;
  cin >> n;

  rep(i, n + 1) {
    if (floor(i * 1.08) == n) {
      x = i;
      break;
    }
  }
  if (x == 0)
    cout << ":(" << endl;
  else
    cout << x << endl;
}
