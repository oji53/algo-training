#include <bits/stdc++.h>
using namespace std;
int main(){
	
	string a;
	int res;
	int digit;
	while(true){
		cin >> a;
		digit = a.size();
		if(a[0] == '0' && digit == 1) break;
		res = 0;
		for (int i=0; i<digit; ++i) {
			res += (int)a[i]-'0'; 
		}
		cout << res << endl;

	}
	

}

