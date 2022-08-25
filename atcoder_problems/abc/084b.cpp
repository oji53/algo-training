#include <bits/stdc++.h>
#include <cctype>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
	int a, b;
	string s;
	bool flag = true;
	cin >> a >> b;
	cin >> s;

	rep(i, s.size()){
		if(i == a){
			if(s[i] != '-') flag = false;
		} 
		else{
			if(!isdigit(s[i])) flag = false;
		}

	};

	if(flag) cout << "Yes" << endl;
	else cout << "No" << endl;

}

