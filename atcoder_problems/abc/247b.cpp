#include <bits/stdc++.h>
#include <set>
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

  set<string> name;
  bool ok = true;

  string s[105];
  string t[105];

  rep(i, n) { cin >> s[i] >> t[i]; }

  rep(i, n) {
    bool flag1 = false;
    bool flag2 = false;
    rep(j, n) {
      if (i == j) {
      } else {
        if (s[i] == s[j] || s[i] == t[j])
          flag1 = true;
        if (t[i] == s[j] || t[i] == t[j])
          flag2 = true;
      }
    }
    if (flag1 && flag2)
      ok = false;
  }
  if (ok)
    cout << yes << endl;
  else
    cout << no << endl;
}
