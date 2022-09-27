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
  string s;
  cin >> s;

  vector<bool> flag(26, false);

  rep(i, s.size()) flag[s[i] - 'a'] = true;

  rep(i, 26) {
    if (!flag[i]) {
      cout << char(i + 'a') << endl;
      return 0;
    }
  }
  cout << "None" << endl;
}
