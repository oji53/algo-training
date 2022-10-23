#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int a,b,c;
	int res;
	cin >> a >> b >> c;
	
	for (int i=a; i<=b; ++i) {
		if(c % i == 0) res += 1;
	}

	cout << res <<endl;
}

