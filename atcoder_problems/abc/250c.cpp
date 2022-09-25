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
  vector<int> a(n + 1);
  vector<int> pos(n + 1);

  rep2(i, 1, n + 1) {
    a[i] = i;
    pos[i] = i;
  }

  int x;
  rep(i, q) {
    cin >> x;

    int v1;
    int v2;
    // right
    if (pos[x] == n) {
      v1 = a[pos[x]];
      v2 = a[pos[x] - 1];
      swap(a[pos[x]], a[pos[x] - 1]);
      swap(pos[v1], pos[v2]);
    } else {
      v1 = a[pos[x]];
      v2 = a[pos[x] + 1];
      swap(a[pos[x]], a[pos[x] + 1]);
      swap(pos[v1], pos[v2]);
    }
  }

  rep2(i, 1, n + 1) {
    if (i != n)
      cout << a[i] << " ";
    else
      cout << a[i] << endl;
  }
}
