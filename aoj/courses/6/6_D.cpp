#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int a[n][m];
	int b[m];
	int ans[n];

	for (int i=0; i<n; i++) {
  		for(int j=0; j<m; j++){
			cin >> a[i][j]; 
		}	
	}
	for (int i=0; i<m; ++i) cin >> b[i];


	for (int i=0; i<n; i++) {
		int tmp_sum=0;
		for (int j=0; j<m; j++) {
			tmp_sum += a[i][j] * b[j]; 	
		}
		ans[i] = tmp_sum;
	}
	for (int i=0; i<n; i++) {
		cout << ans[i] << endl;	
	}

}

