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

int main() {
  int n, q;
  ll res = 0;
  int a[101010];
  int elements[101010] = {0};

  cin >> n;
  rep(i, n) cin >> a[i];
  rep(i, n) elements[a[i]]++;
  cin >> q;

  rep(i, 101010) res += i * elements[i];

  rep(i, q) {
    int b, c;
    cin >> b >> c;
    res += (c - b) * elements[b];
    cout << res << endl;

    elements[c] += elements[b];
    elements[b] = 0;
  }
}
