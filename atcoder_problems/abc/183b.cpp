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
	ll sx,sy,gx,gy;
	cin >> sx >> sy >> gx >> gy;

	double res;
	
	res = (double)(gx*sy + sx*gy) / (gy + sy);

	printf("%.8f\n", res);


}

