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
	cin >> n;

	ll power = 1;

	rep2(i, 1, n+1){
		power *= i;	
		if(power >= 1000000007) power %= 1000000007;
	};
	cout << power << endl;

}

