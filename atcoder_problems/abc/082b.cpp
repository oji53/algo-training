#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
using namespace std;
using ll = long long;
#define all(obj) (obj).begin(), (obj).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define yes "Yes"
#define no "No"

int main() {
  string s, t;
  string res;
  cin >> s;
  cin >> t;

  sort(all(s));
  sort(all(t), greater<int>());

  if (s < t)
    res = yes;
  else
    res = no;
  cout << res << endl;
}
