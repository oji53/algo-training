#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	char op;
	int res;

	while (op != '?') {
		cin >> a >> op >> b;
		if(op == '+') res = a + b;
		else if(op == '-') res = a - b;
		else if(op == '*') res = a * b;
		else if(op == '/') res = a / b;
		else break;
		cout << res << endl;
	}
}
