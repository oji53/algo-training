#include <bits/stdc++.h>
#include <map>
#include <set>
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
  string s[202020];

  rep(i, n) cin >> s[i];

  multiset<string> st;
  map<string, int> mp;

  rep(i, n) {
    if (mp.find(s[i]) == mp.end()) {
      cout << s[i] << endl;
      mp[s[i]] = 1;
    } else {
      cout << s[i] << "(" << mp[s[i]] << ")" << endl;
      mp[s[i]]++;
    }
  }
}
