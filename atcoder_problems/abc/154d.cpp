#include <algorithm>
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  int n, k;
  double sum = 0.0;
  double res = 0.0;
  cin >> n >> k;

  double p[202020];
  double ex[202020];
  rep(i, n) cin >> p[i];
  rep(i, n) ex[i] = (p[i] * (p[i] + 1) / 2) / p[i];

  rep(i, k) { sum += ex[i]; }
  res = sum;

  rep(i, n - k) {
    sum = sum - ex[i] + ex[i + k];
    res = max(res, sum);
  }

  printf("%.8f\n", res);
}
