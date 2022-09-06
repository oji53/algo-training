#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <numeric>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  string s;
  cin >> s;
  int k = s.size();
  int res = 0;
  vector<int> rem(k);
  vector<int> rem_count(3, 0);
  rep(i, k) rem[i] = (s[i] + '0') % 3;

  rep(i, k) rem_count[rem[i]] += 1;

  while (true) {
    if (accumulate(all(rem), 0) % 3 == 0)
      break;

    else if (accumulate(all(rem), 0) % 3 == 1) {
      if (rem_count[1] > 0 && k > 1) {
        res = 1;
      } else if (rem_count[2] > 1 && k > 2) {
        res = 2;
      } else {
        res = -1;
      }
      break;

    } else {
      if (rem_count[2] > 0 && k > 1)
        res = 1;
      else if (rem_count[1] > 1 && k > 2)
        res = 2;
      else
        res = -1;
      break;
    }
  }

  cout << res << endl;
}
