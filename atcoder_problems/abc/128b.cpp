#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <numeric>
#include <set>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll=long long;

int main(){
	int n;
	cin >> n;
	int p[n];
	string s[n];
	rep(i, n) cin >> s[i] >> p[i];	
	
	vector<int> ans(n);
	rep(i, n) ans[i] = i;

	sort(all(ans), [&](int i, int j){
			if(s[i] != s[j]) return s[i] < s[j];
			return p[i] > p[j];
			});
	
	rep(i, n) cout << ans[i] + 1<< endl;

}

