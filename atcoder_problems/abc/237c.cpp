#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <functional>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;
///
int main() {
  string s;
  string res = yes;
  cin >> s;

  int lht = 0;
  int rht = 0;
  set<int, greater<int>> a;
  rep(i, s.size()) {
    if (s[i] == 'a') {
      a.insert(i);
      lht++;
    } else
      break;
  }
  for (int i = s.size() - 1; i >= 0; i--) {
    if (s[i] == 'a') {
      rht++;
      a.insert(i);
    } else
      break;
  }

  if (lht > rht)
    res = no;
  else {
    string tmp(rht - lht, 'a');
    s = tmp + s;
  }

  if (s != string(s.rbegin(), s.rend())) {
    res = no;
  }
  cout << res << endl;
}
