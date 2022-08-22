#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
	int n, w;
	int a[305];
	int flag[1000006] = {false};
	int count = 0;
	cin >> n >> w;

	rep(i, n) cin >> a[i];

	rep(i, n){
		if(a[i] <= w && !flag[a[i]]){
			count += 1;
			flag[a[i]] = true;
		} 
	};

	rep2(i, 0, n-1){
		rep2(j, i+1, n){

		if(a[i] + a[j] <= w && !flag[a[i]+a[j]]){
			count += 1;
			flag[a[i]+a[j]] = true;
		} 
		};
	};	

	rep2(i, 0, n-2){
		rep2(j, i+1, n-1){
			rep2(k, j+1, n){

		if(a[i] + a[j] + a[k] <= w && !flag[a[i]+a[j]+a[k]]){
			count += 1;
			flag[a[i]+a[j]+a[k]] = true;
		} 
			};
		};
	};

	cout << count << endl;

}

