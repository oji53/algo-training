#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
	int n;
	double sum = 0.0;
	double ave;
	double var;
	double sd;
	while (true) {
		cin >> n;
		sum = 0.0;	
		var = 0.0;
		double a[n];
		if(n == 0) break;
		rep(i, n){
			cin >> a[i];
			sum += a[i];
		} 
		ave = sum / n;
		
		rep(i, n) var += (a[i] - ave)*(a[i] - ave) / n;
		
		sd = sqrt(var);

		printf("%.8f\n", sd);	
		

	}

}

