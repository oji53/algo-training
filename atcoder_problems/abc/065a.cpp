#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
	int x, a, b;
	string res;
	cin >> x >> a >> b;
	

	if(b-a <= 0) res = "delicious";
	else if(b-a <= x) res = "safe";
	else res = "dangerous";

	cout << res << endl;


}

