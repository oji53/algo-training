#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  ll n;
  ll res = 0;

  cin >> n;

  if (n >= 1000)
    res += n - 999;
  if (n >= 1000000)
    res += n - 999999;
  if (n >= 1000000000)
    res += n - 999999999;
  if (n >= 1000000000000)
    res += n - 999999999999;
  if (n >= 1000000000000000)
    res += n - 999999999999999;
  cout << res << endl;
}
