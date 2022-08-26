#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <numeric>
#include <regex>
#include <set>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main(){
	int x,n;
	set<int> p;
	cin >> x >> n;
	
	rep(i, n){
		int a; cin >> a;
		p.insert(a);
	};
	
	int ans = INT_MAX, diff = INT_MAX;
	rep2(i, 0, 102){
		if(!p.count(i)){
			int d = abs(i-x);
			if(d < diff){
				ans = i;
				diff = d;
			}
		}
	};

	cout << ans << endl;

}

