#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n,x;
	int count = 0;
	while(true){
		cin >> n >> x;
		if(n == 0 && x == 0) break;
		count = 0;	
		for (int i=1; i<=n; ++i) {
			for (int j=i+1; j<=n; ++j) {
				for (int k=j+1; k<=n; ++k) {
					/* if(i+j+k == x) count += 1; */	
					if(i+j+k == x) count += 1;
					/* if(i+j+k == x && i!=j && i!=k && j!=k) cout << i << " " << j << " " << k << endl; */ 
				}	
			}	
		}
		cout << count << endl;

	}

}

