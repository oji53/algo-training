#include <bits/stdc++.h>
using namespace std;
int main(){
	int r,c;
	int A[100][100] = {{0}};
	int res[101][101] = {{0}};

	int sum_r[101] = {0};
	int sum_c[101] = {0};
	int sum_all = 0;

	cin >> r >> c;
	
	for (int i=0; i<r; ++i) {
		for (int j=0; j<c; ++j) {
			cin >> A[i][j];	
		}	
	}

	int tmp_sum_r = 0;
	int tmp_sum_c = 0;
	int tmp_sum_all = 0;

	for (int i=0; i<r; ++i) {
		tmp_sum_c = 0;
		for (int j=0; j<c; ++j) {
			tmp_sum_c += A[i][j];
			sum_all += A[i][j];
		}
		sum_c[i] = tmp_sum_c;
	}

	for (int i=0; i<c; ++i) {
		tmp_sum_r = 0;
		for (int j=0; j<r; ++j) {
			tmp_sum_r += A[j][i];
		}
		sum_r[i] = tmp_sum_r;
	}

	for (int i=0; i<r+1; ++i) {
		for (int j=0; j<c+1; ++j) {
			if(j==c && i==r) res[i][j] = sum_all;
			else if(j==c) res[i][j] = sum_c[i];	
			else if(i==r) res[i][j] = sum_r[j];	
			else res[i][j] = A[i][j];
			
			if(j==c) cout << res[i][j];
			else cout << res[i][j] << " ";
	}
	cout << endl;
	

	}
}
