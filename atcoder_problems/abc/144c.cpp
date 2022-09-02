#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll=long long;

int main(){
	ll n;
	ll res=1000000000000000;
	cin >> n;
	
	rep2(i, 1, 1000005){
		if(n % i == 0){
			res = min(res, (i + n/i) - 2);
		}
	};	
	cout << res << endl;

}

