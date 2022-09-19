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
  int n, q;
  cin >> n >> q;
  map<int, int> cnt;
  map<int, vector<int>> idx;

  rep2(i, 1, n + 1) {
    int a;
    cin >> a;
    cnt[a]++;
    idx[a].push_back(i);
  }

  rep2(i, 1, q + 1) {
    int x, k;
    cin >> x >> k;
    if (cnt[x] >= k) {
      cout << idx[x][k - 1] << endl;
    } else {
      cout << -1 << endl;
    }
  }
}
