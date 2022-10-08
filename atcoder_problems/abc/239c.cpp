#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

int main() {
  int x1, y1, x2, y2;
  bool flag = false;
  cin >> x1 >> y1 >> x2 >> y2;

  rep(i, 8) {
    rep(j, 8) {
      if ((x1 + dx[i] == x2 + dx[j]) && (y1 + dy[i] == y2 + dy[j]))
        flag = true;
    }
  }
  if (flag)
    cout << yes << endl;
  else
    cout << no << endl;
}
