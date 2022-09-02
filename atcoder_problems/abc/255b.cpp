#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <functional>
#include <math.h>
#include <set>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll=long long;

int main(){
	int n,k;
	int a[1005];
	int x[1005];
	int y[1005];
	
	vector<double> res;

	cin >> n >> k;
	rep2(i, 1, k+1) cin >> a[i];
	rep2(i, 1, n+1) cin >> x[i] >> y[i];
	
	set<int> a_set;
	rep2(i, 1, k+1) a_set.insert(a[i]);	

	rep2(i, 1, n+1){

		if(!a_set.count(i)){	
			double tmp = DBL_MAX;
			rep2(j, 1, k+1){
				double dist = sqrtl((ll)(x[i] - x[a[j]])*(x[i] - x[a[j]]) + (ll)(y[i] - y[a[j]])*(y[i] - y[a[j]]));
				tmp = min(tmp, dist);	
			};
			res.push_back(tmp);
		}
	};



	sort(all(res), greater<double>());
	
	printf("%.12f\n", res[0]);
	

}

