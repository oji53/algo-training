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
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<vector<int>> b(k);
  vector<int> res;

  rep(i, n) { b[i % k].push_back(a[i]); }

  rep(i, k) { sort(all(b[i]), greater<int>()); }

  rep(i, n) {
    // res.push_back(b[i % k].front());
    // b[i % k].erase(b[i % k].begin());
    res.push_back(b[i % k].back());
    b[i % k].pop_back();
  }

  sort(all(a));
  if (a != res)
    cout << no << endl;
  else
    cout << yes << endl;
}
