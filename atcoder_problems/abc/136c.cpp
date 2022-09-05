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
  int n;
  int h[100005];
  cin >> n;
  rep(i, n) cin >> h[i];

  rep(i, n - 1) {
    if (h[i + 1] - h[i] >= 1)
      h[i + 1] -= 1;
    else if (h[i + 1] < h[i]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
