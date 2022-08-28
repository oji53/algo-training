#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll=long long;

int main(){
	int s;
	cin >> s;
	int res = 1;
	set<int> a; 
	while (true) {
		if(a.count(s) != 0) break;
		else a.insert(s);

		if(s % 2 == 0) s = s/2;
		else s = 3*s + 1;
		res++;
	}
	cout << res << endl;

}

