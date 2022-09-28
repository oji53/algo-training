#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  int n;
  string res = "satisfiable";
  cin >> n;
  string s[n];
  rep(i, n) cin >> s[i];

  set<string> st1;
  set<string> st2;

  // rep(i, n) {
  //   if (s[i][0] != '!')
  //     st1.insert(s[i]);
  //   else
  //     st2.insert(s[i].erase(0, 1));
  // }
  rep(i, n) st1.insert(s[i]);

  for (string t : st1) {
    if (st1.count("!" + t)) {
      res = t;
      break;
    }
  }

  // for (string t : st1) {
  //   if (st2.count(t)) {
  //     res = t;
  //     break;
  //   }
  // }
  cout << res << endl;
}
