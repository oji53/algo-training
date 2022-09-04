#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <math.h>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll=long long;

int get_degit(ll num){
	return to_string(num).length();
}


int main(){
	ll n;
	ll res = 0;
	cin >> n;
	
	int degit;
	degit = get_degit(n); 
	
	rep2(i, 1, degit+1){
		if(i < degit){
			ll tmp = powl(10, i-1) * 9;
			res += (tmp%998244353)*((tmp+1)%998244353)/2;
			res %= 998244353;
		}
		else{
			ll tmp = n - powl(10, i-1) + 1;
			res += (tmp%998244353)*((tmp+1)%998244353)/2;	
			res %= 998244353;
		}
	};

	cout << res << endl;
}

