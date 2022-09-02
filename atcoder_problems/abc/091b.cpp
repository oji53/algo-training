#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll=long long;

int main(){
	int n, m;
	string s[105];
	string t[105];
	int res = 0;		
	set<string> words;
	cin >> n;
	rep(i, n) cin >> s[i];
	cin >> m;
	rep(i, m) cin >> t[i];

	rep(i, n) words.insert(s[i]);
	rep(i, m) words.insert(t[i]);

	for (string word : words) {
		int tmp = 0;
		
		rep(i, n) if(s[i] == word) tmp += 1;
		rep(i, m) if(t[i] == word) tmp -= 1;

		res = max(res, tmp);
	}
	cout << res << endl;

}

