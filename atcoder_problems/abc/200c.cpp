#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  int n;
  ll res = 0;
  cin >> n;
  vector<int> a(n);
  int b[200] = {0};
  rep(i, n) cin >> a[i];
  rep(i, n) b[a[i] % 200]++;

  rep(i, 200) { res += (ll)b[i] * (b[i] - 1) / 2; }

  cout << res << endl;
}
