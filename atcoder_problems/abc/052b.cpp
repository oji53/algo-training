#include <algorithm>
#include <bits/stdc++.h>
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
  int n;
  int x = 0;
  int res = 0;
  vector<int> vec(n, 0);
  cin >> n;
  string s;
  cin >> s;

  rep(i, n) {
    if (s[i] == 'I') {
      x++;
    } else {
      x--;
    }
    vec[i] = x;
  }
  int mx = *max_element(all(vec));
  res = max(res, mx);

  cout << res << endl;
}
