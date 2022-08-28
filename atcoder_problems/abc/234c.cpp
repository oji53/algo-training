#include <algorithm>
#include <bits/stdc++.h>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <regex>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll=long long;

int main(){
	ll K;
	cin >> K;

	stringstream ss;
	string s;
	ss << bitset<64>(K);
	s = ss.str();
	int head = s.find("1");	
	s = regex_replace(s,regex("1"), "2");	

	rep2(i, head, s.size()) cout << s[i];
	cout << endl;
}

