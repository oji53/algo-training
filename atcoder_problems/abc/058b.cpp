#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  string o, e;
  vector<char> res;
  cin >> o;
  cin >> e;

  int n = o.size() + e.size();

  rep(i, n) {
    if (i % 2 == 0) {
      res.push_back(o[0]);
      o.erase(0, 1);
    } else {

      res.push_back(e[0]);
      e.erase(0, 1);
    }
  }
  for (char c : res) {
    cout << c;
  }
  cout << endl;
}
