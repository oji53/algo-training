#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

ll get_sum(ll n, ll a) {
  ll q = n / a;
  ll sum;
  sum = (a + a * q) * q / 2;

  return sum;
}

int main() {
  ll n, a, b;
  ll res = 0;
  cin >> n >> a >> b;

  if (a == 1 || b == 1) {

  } else {
    res = n * (n + 1) / 2;
    ll sum_a = get_sum(n, a);
    ll sum_b = get_sum(n, b);
    ll sum_c = get_sum(n, lcm(a, b));
    res -= sum_a;
    res -= sum_b;
    res += sum_c;
  }
  cout << res << endl;
}
