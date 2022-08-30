#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll=long long;

int main(){
 	ll n,k,x;
	ll res = 0;
 	cin >> n >> k >> x;

 	vector<ll> a(n,0);

	rep(i, n) cin >> a[i];
	
	/* res = accumulate(all(a),0); */
	rep(i, n) res += a[i];
	ll m = 0;
	
	rep(i, n){
		m += a[i]/x;
	};	
	m = min(m,k);
	k -= m;
	res -= m*x;

	rep(i, n) a[i] %= x;
 	
	sort(all(a), greater<ll>());

	rep(i, n){
		if(k == 0) break; 
		res -= a[i];
		k -= 1;
	};

	cout << res << endl;

}

