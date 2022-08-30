#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <math.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll=long long;

int factorial(int n){
	int ans;

	ans = 1;

	rep2(i, 2, n+1) ans *= i;
	return ans;
}



int main(){
	int n;
	int x[10];
	int y[10];
	int array[10];
	double dist_array[10][10] = {{0.0}};
	double res = 0.0;
	cin >> n;

	rep2(i, 1, n+1){
		cin >> x[i] >> y[i];
	};
	
	rep(i, n) array[i] = i+1;
	
	rep2(i, 1, n+1){
		rep2(j, i+1, n+1){
			dist_array[i][j] = sqrt(double(x[i]-x[j])*(x[i]-x[j]) + double(y[i]-y[j])*(y[i]-y[j]));
			dist_array[j][i] = sqrt(double(x[i]-x[j])*(x[i]-x[j]) + double(y[i]-y[j])*(y[i]-y[j]));
		};
	};

	do {
		rep(i, n-1){
			res += dist_array[array[i]][array[i+1]];
		};
	}while (next_permutation(array, array+n));
	
	res /= factorial(n);

	printf("%.8f\n", res);


}

