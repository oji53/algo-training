#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <iterator>
#include <utility>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
	

double get_dist(int a[], int b[], int n, int deg){
	double dist = 0;

	rep(i, n) dist += pow(abs(a[i] - b[i]), deg);
	
	dist = pow(dist, 1.0/(double)deg);	

	return dist;
}

double get_chebyshev(int a[], int b[], int n){
	double dist=0.0;
	int array_diff_abs[n];

	rep(i, n) array_diff_abs[i] = abs(a[i]-b[i]);
	
	rep(i, n) dist = max<double>(dist, array_diff_abs[i]);
	
	return dist;
}



int main(){
	int n;
	int a[105];
	int b[105];
	
	double dist_c;
	double dist_p1;
	double dist_p2;
	double dist_p3;

	cin >> n;

	rep(i, n) cin >> a[i];
	rep(i, n) cin >> b[i];

	dist_p1 = get_dist(a, b, n, 1);
	dist_p2 = get_dist(a, b, n, 2);
	dist_p3 = get_dist(a, b, n, 3);
	dist_c = get_chebyshev(a, b, n);
	
	printf("%8f\n", dist_p1);
	printf("%8f\n", dist_p2);
	printf("%8f\n", dist_p3);
	printf("%8f\n", dist_c);

}

