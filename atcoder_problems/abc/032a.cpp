#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  int a, b, n;
  cin >> a;
  cin >> b;
  cin >> n;

  int q = lcm(a, b);
  double p = ceil((double)n / q);

  int res = p * q;
  cout << res << endl;
}
