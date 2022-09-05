#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <numeric>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;

int main() {
  int n;
  double a[100005];
  double b[100005];
  double times[100005];
  double sum = 0.0;
  double T;

  cin >> n;
  rep2(i, 1, n + 1) {
    cin >> a[i] >> b[i];
    times[i] = a[i] / b[i];
  }

  T = accumulate(times + 1, times + n + 1, (double)0.0) / 2.0;

  double tmp_time = 0.0;
  rep2(i, 1, n + 1) {
    tmp_time += times[i];
    sum += a[i];
    if (tmp_time >= T) {
      tmp_time -= times[i];
      sum -= a[i];
      sum += b[i] * (T - tmp_time);
      break;
    }
  };

  printf("%.8f\n", sum);
}
