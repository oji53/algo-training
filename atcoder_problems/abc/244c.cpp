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

bool flag[2005];

int main() {
  int n;
  cin >> n;

  while (true) {

    rep(i, 2 * n + 1) {
      if (!flag[i]) {
        cout << i + 1 << endl;
        flag[i] = true;
        break;
      }
    }

    int a;
    cin >> a;
    if (a == 0)
      break;
    flag[a - 1] = true;
  }
  return 0;
}
