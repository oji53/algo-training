#include <algorithm>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
using ll = long long;
#define all(obj) (obj).begin(), (obj).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  string s;
  int res = INT_MAX;
  cin >> s;

  rep(i, s.size() - 2) {
    int tmp = (s[i] - '0') * 100 + (s[i + 1] - '0') * 10 + (s[i + 2] - '0');

    res = min(res, abs(tmp - 753));
  }
  cout << res << endl;
}
