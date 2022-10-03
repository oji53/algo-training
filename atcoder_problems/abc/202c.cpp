#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  int n;
  int a[101010] = {0};
  int b[101010] = {0};
  int c[101010] = {0};
  int d[101010] = {0};
  int cnt[101010] = {0};

  cin >> n;
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  rep(i, n) cin >> c[i];
  rep(i, n) d[i] = b[c[i] - 1];

  rep(i, n) cnt[d[i]]++;

  ll res = 0;
  rep(i, n) res += cnt[a[i]];

  cout << res << endl;
}
