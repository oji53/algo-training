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
	int n;
	int a[100005];
	int b[100005];
	ll res = 0;
    cin >> n;	
	rep(i, n+1) cin >> a[i];
	rep(i, n) cin >> b[i];
	
	rep(i, n){
		int count = min(a[i], b[i]);
		
		res += count;

		a[i] -= count;
		b[i] -= count;
		
		count = min(b[i], a[i+1]);

		a[i+1] -= count;
		b[i] -= count;
		res += count;
	};

	cout << res <<endl;
	
}

