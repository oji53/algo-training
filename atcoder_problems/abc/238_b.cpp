#include <bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin >> n;
	int a[365];
	int res[360] = {0};

	for(int i=0; i<n; ++i) cin >> a[i];
	
	int sum = 0;
	for(int i=0; i<n; ++i){
		sum += a[i];
		res[sum%360] = 1;
	}
	
	int ans=0;
	int tmp_sum = 0;
	for (int i=0; i<360; ++i) {
		if(res[i] == 1){
			tmp_sum = 0;
		}
		tmp_sum += 1;
		if(ans < tmp_sum) ans = tmp_sum;
	}
	/* if(ans < tmp_sum) ans = tmp_sum; */
	cout << ans << endl;
	

}

