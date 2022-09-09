#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

int main() {
  string w;
  cin >> w;

  vector<int> alphabets(130, 0);

  rep(i, w.size()) { alphabets[(int)w[i]] += 1; }

  for (int x : alphabets) {
    if (x % 2 != 0) {
      cout << no << endl;
      return 0;
    }
  }
  cout << yes << endl;
}
