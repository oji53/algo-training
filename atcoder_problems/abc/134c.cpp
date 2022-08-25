#include <algorithm>
#include <bits/stdc++.h>
#include <numeric>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int res;

  vector<int> order(n);

  iota(all(order), 0);

  sort(all(order), [&](int i, int j){return a[i] < a[j];});

  rep(i, n) {
	if(i == order[n-1]) cout << a[order[n-2]] << endl;
	else cout << a[order[n-1]] << endl;
  }
}
