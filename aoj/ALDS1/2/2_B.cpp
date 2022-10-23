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

int selection_sort(int a[], int n) {
  int count = 0;

  rep(i, n) {
    int minj = i;
    rep2(j, i, n) {
      if (a[j] < a[minj]) {
        minj = j;
      }
    }

    int tmp = a[i];
    if (a[i] != a[minj])
      count++;
    a[i] = a[minj];
    a[minj] = tmp;
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  int a[n];
  int res = 0;
  rep(i, n) cin >> a[i];

  res = selection_sort(a, n);

  rep(i, n) {
    if (i != n - 1)
      cout << a[i] << " ";
    else
      cout << a[i] << endl;
  }

  cout << res << endl;
}
