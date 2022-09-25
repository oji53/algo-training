#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "GREATER"
#define no "LESS"
#define eq "EQUAL"
using ll = long long;

int main() {
  string a, b;
  string res = eq;
  cin >> a;
  cin >> b;
  int len_a = a.size();
  int len_b = b.size();

  if (len_a > len_b)
    res = yes;
  else if (len_a < len_b)
    res = no;
  else {

    if (a > b)
      res = yes;
    else if (a < b)
      res = no;
  }
  cout << res << endl;
}
