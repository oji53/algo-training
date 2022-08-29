#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll=long long;

int f(int n, int op){
	if(op) return n;
	else return -n;
}

int main(){
	string s;
	getline(cin, s);
	int res = 0;
	char op[2] = {'-', '+'};	
	int a = s[0] - '0';
	int b = s[1] - '0';
	int c = s[2] - '0';
	int d = s[3] - '0';
	
	rep(i, 2){
		rep(j, 2){
			rep(k, 2){
				res = a + f(b, i) + f(c, j) + f(d, k); 
				if(res == 7){
					cout << a << op[i] << b << op[j] << c << op[k] << d << "=7" << endl;
					return 0;
				}
			};
		};
	};
	
}

