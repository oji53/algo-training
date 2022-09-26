#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

bool IsPrime(int num) {
  if (num < 2)
    return false;
  else if (num == 2)
    return true;
  else if (num % 2 == 0)
    return false; // 偶数はあらかじめ除く

  double sqrtNum = sqrt(num);
  for (int i = 3; i <= sqrtNum; i += 2) {
    if (num % i == 0) {
      // 素数ではない
      return false;
    }
  }

  // 素数である
  return true;
}

int main() {
  bool is_prime = true;
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  rep2(i, a, b + 1) {

    bool flag = false;
    rep2(j, c, d + 1) {
      if (IsPrime(i + j)) {
        flag = true;
      }
    }
    if (!flag)
      is_prime = false;
  }

  if (is_prime)
    cout << "Aoki" << endl;
  else
    cout << "Takahashi" << endl;
}
