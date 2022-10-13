#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
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
  cin >> n;
  vector<int> s;
  bool flag_all_ten = true;
  rep(i, n) {
    int t;
    cin >> t;
    if (t % 10 != 0)
      flag_all_ten = false;
    s.push_back(t);
  }

  sort(all(s));

  int sum = accumulate(all(s), 0);

  if (flag_all_ten) {
    cout << 0 << endl;

  } else if (sum % 10 == 0) {
    rep(i, n) {
      if (s[i] % 10 != 0) {
        cout << sum - s[i] << endl;
        break;
      }
    }
  } else {
    cout << sum << endl;
  }
}
