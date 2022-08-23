#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
	int n, m;
	int a[55];
	int b[55];
	
	int next[55][55] = {{0}};
	
	cin >> n >> m;

	rep(i, m) cin >> a[i] >> b[i];

	rep(i, m){
		next[a[i]-1][b[i]-1] += 1;
		next[b[i]-1][a[i]-1] += 1;
	};	

	rep(i, n){
		int sum = 0;
		rep(j, n){
			sum += next[i][j];
		};
		cout << sum << endl;
	};
		
}

