#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <map>
#include <set>
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
  cin >> n;

  map<string, int> cnt;

  rep(i, n) {
    string s;
    cin >> s;
    cnt[s]++;
  }
  int mx = -1;

  for (auto &x : cnt) {
    mx = max(mx, x.second);
  }

  for (auto &x : cnt) {
    if (x.second == mx)
      cout << x.first << endl;
  }
}
