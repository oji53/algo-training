#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
	int n;
	cin >> n;
	int count = 0;	
	int p[55];
	rep2(i, 2, n+1) cin >> p[i];
	

	int anc = p[n]; 
	while (true) {
		count += 1;
		if(anc == 1) break;
		else anc = p[anc];
	}

	cout << count << endl;


}

