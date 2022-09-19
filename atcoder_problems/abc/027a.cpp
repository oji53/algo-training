#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	int res;
	cin >> a >> b >> c;

	if(a == b) res = c;
	else if(a == c) res = b;
	else res = a;

	cout << res << endl;

}

