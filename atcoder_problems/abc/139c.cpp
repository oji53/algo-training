#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main(){
	int n;
	int h[100005];
	bool checked[100005];
	cin >> n;	
	rep(i, n) cin >> h[i];
	
	int res = 0;
	int stp = 0;
	rep2(i, 1, n){
		if(h[i] <= h[i-1]){
			stp += 1;
			res = max(res, stp);
		}	
		else stp = 0;
	};
	
	cout << res << endl;

}

