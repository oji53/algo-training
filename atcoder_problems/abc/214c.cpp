#include <bits/stdc++.h>
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
  vector<int> s(n);
  vector<int> t(n);
  rep(i, n) cin >> s[i];
  rep(i, n) cin >> t[i];

  vector<int> memo;
  memo = t;
  rep(i, n * 2) {
    memo[(i + 1) % n] = min(memo[(i + 1) % n], memo[i % n] + s[i % n]);
  }

  for (ll ans : memo) {
    cout << ans << endl;
  }
}
