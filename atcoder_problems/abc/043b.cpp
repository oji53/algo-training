#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  string s;
  string res;
  cin >> s;

  rep(i, s.size()) {
    if (s[i] == '0')
      res += '0';
    else if (s[i] == '1')
      res += '1';
    else {
      if (res.size() != 0) {
        res.pop_back();
      }
    }
  }
  cout << res << endl;
}
