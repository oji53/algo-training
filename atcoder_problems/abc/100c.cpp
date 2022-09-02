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
	int a[10005];
	ll res = 0;
	cin >> n;
	rep(i, n) cin >> a[i];
	
	rep(i, n){
		while (true) {
			if(a[i] % 2 == 0){
				a[i] /= 2;
				res += 1;
			} 	
			else break;
		}
	};

	cout << res << endl;


}

