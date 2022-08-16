#include <bits/stdc++.h>
using namespace std;
int main(){
	int h,w;
	char a[105][105];

	cin >> h >> w;

	for (int i=0; i<h; ++i) {
		for (int j=0; j<w; ++j) {
			cin >> a[i][j];	
		}	
	}


	for (int i=0; i<h+2; ++i) {
		for (int j=0; j<w+2; ++j) {
			if(i==0 || i==h+1 || j==0 || j==w+1) cout << "#";
			else cout << a[i-1][j-1];
		}
		cout << endl;
	}

}

