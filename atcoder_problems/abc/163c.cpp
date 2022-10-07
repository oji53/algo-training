#include <bits/stdc++.h>
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
  int a[202020] = {0};
  int cnt[202020] = {0};

  rep(i, n - 1) cin >> a[i];
  rep(i, n - 1) cnt[a[i]]++;

  rep2(i, 1, n + 1) cout << cnt[i] << endl;
}
