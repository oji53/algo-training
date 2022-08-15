#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int count_array[4][3][10] = {0};

	int b[n],f[n],r[n],v[n];
	for (int i=0; i<n; ++i) {
		cin >> b[i] >> f[i] >> r[i] >> v[i];		
	}
	for (int i=0; i<n; ++i) {
		count_array[b[i]-1][f[i]-1][r[i]-1] += v[i];
	}
	
	for (int i=0; i<4; ++i) {
		for (int j=0; j<3; ++j) {
	 		for (int k=0; k<10; ++k) {
	 			cout << " " << count_array[i][j][k];
	 		}
			cout << endl;
		} 
		if(i != 3) cout << "####################" << endl;
	}

}

