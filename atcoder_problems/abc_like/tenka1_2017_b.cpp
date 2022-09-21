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
  ll res = 0;
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);

  rep(i, n) cin >> a[i] >> b[i];

  // sort(all(a), greater<int>());
  // sort(all(b));
  ll max = *max_element(all(a));
  ll min = *min_element(all(b));

  // res = a[0] + b[0];
  res = max + min;
  cout << res << endl;
}
