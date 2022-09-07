#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
using ll = long long;
#define all(obj) (obj).begin(), (obj).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  ll n;
  ll k;
  ll res;
  cin >> n >> k;

  res = n - (n / k) * k;

  res = min(res, llabs(res - k));

  cout << res << endl;
}
