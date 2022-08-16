#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int m[60],f[60],r[60];
	int n;
	for (int i=0; i<60; ++i) {
		cin >> m[i] >> f[i] >> r[i];
		if(m[i] == -1 && f[i] == -1 && r[i] == -1){
			n = i;
			break;
		} 
	}
	for (int i=0; i<n; ++i) {
		int sum = m[i] + f[i];
		
		if(m[i] == -1 || f[i] == -1) cout << "F" << endl;
		else if(sum >= 80) cout << "A" << endl;
		else if(sum < 80 && sum >= 65) cout << "B" << endl;
		else if(sum < 65 && sum >= 50) cout << "C" << endl;
		else if(sum < 50 && sum >= 30){
			if(r[i] >= 50) cout << "C" << endl;
			else cout << "D" << endl;
		}
		else cout << "F" << endl;	
	}	

}

