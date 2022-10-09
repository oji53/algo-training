#include <algorithm>
#include <bits/stdc++.h>
#include <iterator>
#include <set>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  int h, w, n;
  cin >> h >> w >> n;

  vector<int> a(n);
  vector<int> b(n);
  vector<int> a_sort;
  vector<int> b_sort;

  rep(i, n) {
    cin >> a[i];
    cin >> b[i];
  }

  rep(i, n) {
    a_sort.push_back(a[i]);
    b_sort.push_back(b[i]);
  }
  sort(all(a_sort));
  sort(all(b_sort));
  a_sort.erase(unique(all(a_sort)), a_sort.end());
  b_sort.erase(unique(all(b_sort)), b_sort.end());

  rep(i, n) {
    auto itr_h = lower_bound(all(a_sort), a[i]);
    auto itr_w = lower_bound(all(b_sort), b[i]);
    cout << (itr_h - a_sort.begin()) + 1 << " " << (itr_w - b_sort.begin()) + 1
         << endl;
  }
}
