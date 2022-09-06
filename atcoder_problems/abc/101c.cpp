#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <math.h>
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
  int res = 0;
  cin >> n >> k;
  int idx_one;
  int a[n];

  rep(i, n) cin >> a[i];
  rep(i, n) if (a[i] == 1) idx_one = i;

  res += ceil((double)(n - 1) / (k - 1));

  cout << res << endl;
}
