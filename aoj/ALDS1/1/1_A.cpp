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

void insertionSort(int a[], int n) {
  rep(k, n) {
    if (k != n - 1)
      cout << a[k] << " ";
    else
      cout << a[k] << endl;
  }

  rep2(i, 1, n) {
    int v = a[i];
    int j = i - 1;

    while (j >= 0 && a[j] > v) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = v;

    rep(k, n) {
      if (k != n - 1)
        cout << a[k] << " ";
      else
        cout << a[k] << endl;
    }
  }
}

int main() {
  int n;
  cin >> n;
  int a[100];
  rep(i, n) cin >> a[i];

  insertionSort(a, n);
}
