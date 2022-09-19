#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <set>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "AC"
#define no "WA"
using ll = long long;

string s;

string solve() {
  int n = s.size();
  if (s[0] != 'A')
    return no;
  set<int> a;
  a.insert(0);

  int c;
  rep2(i, 2, n - 1) {
    if (s[i] == 'C')
      c++;
    a.insert(i);
  }
  if (c != 1)
    return no;

  rep(i, n) {
    if (!a.count(i)) {
      if (isupper(s[i]))
        return no;
    }
  }
  return yes;
}

int main() {
  cin >> s;
  cout << solve() << endl;
}
