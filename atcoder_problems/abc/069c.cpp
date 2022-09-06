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

int main() {
  int n;
  int a[100005];
  int rem_count[5] = {0};
  string res;
  cin >> n;
  rep(i, n) cin >> a[i];

  rep(i, n) {
    if (a[i] % 4 == 0)
      rem_count[4] += 1;
    else if (a[i] % 2 == 0)
      rem_count[2] += 1;
    else
      rem_count[1] += 1;
  }

  if (rem_count[4] >= rem_count[1])
    res = yes;
  else if (rem_count[4] + 1 == rem_count[1] && rem_count[2] == 0)
    res = yes;

  else
    res = no;

  cout << res << endl;
}
