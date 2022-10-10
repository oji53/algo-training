#include <algorithm>
#include <bits/stdc++.h>
#include <map>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  int c[303030];
  rep(i, n) cin >> c[i];
  int res = 0;

  map<int, int> mp;

  rep(i, k) mp[c[i]]++;
  res = mp.size();

  rep2(i, 1, n - k + 1) {
    mp[c[i - 1]]--;
    if (mp[c[i - 1]] == 0)
      mp.erase(c[i - 1]);

    mp[c[i + k - 1]]++;
    res = max(res, (int)mp.size());
  }

  // multiset<int> st;
  // set<int> st1;

  // rep(i, k) {
  //   st.insert(c[i]);
  //   st1.insert(c[i]);
  // }
  // res = st1.size();

  // rep2(i, 1, n - k + 1) {
  //   if (st.count(c[i - 1]) == 1) {
  //     st1.erase(c[i - 1]);
  //     st.erase(c[i - 1]);
  //   } else {
  //     auto it = st.find(c[i - 1]);
  //     st.erase(it);
  //   }

  //   st.insert(c[i + k - 1]);
  //   st1.insert(c[i + k - 1]);
  //   res = max(res, int(st1.size()));
  // }
  cout << res << endl;
}
