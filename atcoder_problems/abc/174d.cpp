#include <bits/stdc++.h>
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
  string s;
  cin >> s;

  int num_r = 0;

  rep(i, n) {
    if (s[i] == 'R')
      num_r++;
  }

  int res = 0;
  rep(i, num_r) {
    if (s[i] == 'W')
      res++;
  }
  cout << res << endl;
}
