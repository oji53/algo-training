#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  ll n;
  cin >> n;
  ll res = 0;

  while (true) {
    string s = to_string(res) + to_string(res);
    if (stoll(s) <= n) {
      res++;
    } else {
      break;
    }
  }
  cout << res - 1 << endl;
}
