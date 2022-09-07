#include <bits/stdc++.h>
#include <list>
using namespace std;
using ll = long long;
#define all(obj) (obj).begin(), (obj).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

void f(int n) {
  if (n == 1) {
    cout << 1;
  }

  else {
    f(n - 1);
    cout << " " << n << " ";
    f(n - 1);
  }
}

int main() {
  int n;
  cin >> n;

  f(n);
  cout << endl;
}
