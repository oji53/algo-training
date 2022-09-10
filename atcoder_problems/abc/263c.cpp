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
  int n, m;
  cin >> n >> m;

  vector<int> order;

  rep(i, n) order.push_back(0);
  rep(i, m - n) order.push_back(1);

  do {
    rep(i, m) {
      if (order[i] == 0)
        cout << i + 1 << " ";
    }
    cout << endl;
  } while (next_permutation(all(order)));
}
