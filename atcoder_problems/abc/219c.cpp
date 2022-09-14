#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <functional>
#include <map>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;
///
int main() {
  string x;
  cin >> x;
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  map<char, int> mapping;
  rep(i, 26) mapping[x[i]] = i;

  sort(all(s), [&](string a, string b) {
    int len = min(a.size(), b.size());

    rep(i, len) {
      int x = mapping[a[i]];
      int y = mapping[b[i]];

      if (x != y)
        return x < y;
    }

    return a.size() < b.size();
  });

  rep(i, n) cout << s[i] << endl;
}
