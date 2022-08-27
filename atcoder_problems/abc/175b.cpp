#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main(){
int n;
int L[105];
int res=0;
cin >> n;
rep(i, n) cin >> L[i];

rep2(i, 0, n){
	rep2(j, i+1, n){
		rep2(k, j+1, n){
			if(L[i] != L[j] && L[i] != L[k] && L[j] != L[k]){
				int m = max(max(L[i],L[j]), L[k]);
				bool flag = false;
				if(m == L[i]){
					if(L[j]+L[k] > m) flag = true;	
				}
				else if (m == L[j]) {
					if(L[i]+L[k] > m) flag = true;	
				}
				else{
					if(L[i]+L[j] > m) flag = true;	
				}
				if(flag) res += 1;
			}
		};
	};
};
	cout << res << endl;
}

