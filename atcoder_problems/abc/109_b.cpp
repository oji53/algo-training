#include <bits/stdc++.h>
using namespace std;

bool array_is_unique(string* array, int n){
	for (int i=0; i<n-1; ++i) {
		for (int j=i+1; j<n; ++j) {
			if(array[i] == array[j]) return false;	
		}	
	}
	return true;
}

int main(){
	
	int n;
	cin >> n;
	string w[n];
	bool is_ruled = true;
	for(int i=0; i<n; i++) cin >> w[i];
	
	for(int i=0; i<n-1; i++){
		if(w[i].back() != w[i+1][0]) is_ruled = false;
	}

	if(is_ruled) is_ruled = array_is_unique(w, n);

	if(is_ruled) cout << "Yes" << endl;
	else cout << "No" << endl;
}

