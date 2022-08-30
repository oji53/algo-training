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
	int n, k;
	int t[10][10];
	int res = 0;		
	cin >> n >> k;
	int order[n];	
	rep(i, n) order[i] = i+1;

	rep2(i, 1, n+1){
		rep2(j, 1, n+1){
			cin >> t[i][j];
		};
	};
	
	do {
		ll sum = 0;
		
		if(order[0] == 1){
			rep(i, n){
				if(i == n-1) sum += t[order[n-1]][order[0]];
				else sum += t[order[i]][order[i+1]];
			};

			if(sum == k) res += 1;
		}
				
	}while (next_permutation(order, order+n));
	
	cout << res << endl;


}

