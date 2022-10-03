#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <functional>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  vector<vector<int>> p(n, vector<int>(3, 0));

  vector<int> sum(n, 0);
  vector<int> sum2(n, 0);
  vector<int> order(n, 0);

  rep(i, n) { rep(j, 3) cin >> p[i][j]; }

  rep(i, n) { rep(j, 3) sum[i] += p[i][j]; }
  rep(i, n) sum2[i] = sum[i];

  sort(all(sum), greater<int>());

  rep(i, n) {
    int tmp = sum2[i] + 300;

    if (tmp >= sum[k - 1])
      cout << yes << endl;
    else
      cout << no << endl;
  }
}
