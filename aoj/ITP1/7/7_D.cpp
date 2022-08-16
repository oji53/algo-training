#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,l;
	long long  a[100][100], b[100][100];
	long long  c[100][100] = {{0}};
	cin >> n >> m >> l;
	
	for (int i=0; i<n; ++i) {
		for (int j=0; j<m; ++j) {
			cin >> a[i][j];	
		}	
	}
	
	for (int i=0; i<m; ++i) {
		for (int j=0; j<l; ++j) {
			cin >> b[i][j];	
		}
	}
	long long int tmp_sum = 0;
	for(int i=0; i<n; ++i){
		for(int j=0; j<l; ++j){
			tmp_sum = 0;
			for(int k=0; k<m; ++k){
				tmp_sum += a[i][k] * b[k][j]; 
			}
			c[i][j] = tmp_sum;
			if(j==(l-1)) cout << c[i][j];
			else cout << c[i][j] << " ";
		}
		cout << endl;
	}
}

