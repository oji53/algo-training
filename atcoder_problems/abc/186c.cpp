#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <sstream>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll=long long;

int main(){
	int n;
	int res=0;
	cin >> n;
	
	rep2(i, 1, n+1){
		string s = to_string(i);
	
		bool flag_dec = true;
		if(s.find('7') != string::npos) flag_dec = false;
		/* rep(j, s.size()){ */
		/* 	if(s[j] == '7'){ */
		/* 		flag_dec = false; */
		/* 		break; */	
		/* 	} */
		/* }; */

		stringstream ss;
		ss << oct << i;
		string s_oct;
		s_oct = ss.str();
		bool flag_oct = true;
		if(s_oct.find('7') != string::npos) flag_oct = false;
		/* rep(j, s_oct.size()){ */
		/* 	if(s_oct[j] == '7'){ */
		/* 		flag_oct = false; */
		/* 		break; */	
		/* 	} */
		/* }; */
		if(flag_oct && flag_dec) res += 1;
	};
	cout << res << endl;


}

