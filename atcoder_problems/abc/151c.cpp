#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll=long long;

int main(){
	int n,m;
	int num_penalty = 0;
	int num_ac = 0;
	int p[100005];
	string S[100005];
	bool flag[100005] = {false};
	int num_wa[100005];
	cin >> n >> m;
	rep(i, m) cin >> p[i] >> S[i];

		
	rep(i, m){

		if(!flag[p[i]]){
			if(S[i] == "WA") num_wa[p[i]] += 1;
			else{
				flag[p[i]] = true;
				num_ac += 1;
			}
		}
	};

	rep2(i, 1, n+1){
		if(flag[i]) num_penalty += num_wa[i];
	};
	
	cout << num_ac << " " << num_penalty << endl;

}

