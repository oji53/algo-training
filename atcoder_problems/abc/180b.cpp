#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <math.h>
#include <valarray>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll=long long;

int main(){
	int n;
	int x[100005];
	ll man = 0;
	ll euc = 0;
	int chev = 0;
	double res_euc;
	cin >> n;
	rep(i, n) cin >> x[i];

	rep(i, n){
		man += abs(x[i]);
		euc += (long long)abs(x[i]) * abs(x[i]);
		chev = max(abs(chev), abs(x[i]));	
	};
	res_euc = sqrtl(euc);

	cout << man << endl;
	printf("%.12lf\n", res_euc);
	cout << chev << endl;
	
}

