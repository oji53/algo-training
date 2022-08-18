#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
	string res;
	string order;
	int q;
	int a;
	int b;

	cin >> res >> q;

	rep(i, q){
		cin >> order;

		if(order == "print"){
			cin >> a >> b;
			rep(j, res.size()){
				if(a <= j && j <= b){
					cout << res[j];
				}
			};
			cout << endl;
		}
		else if(order == "reverse"){
			cin >> a >> b;
			string rev = res.substr(a, b-a+1);
			reverse(rev.begin(), rev.end());
			int count_tmp=0;
			rep(j, res.size()){
				if(a <= j && j <= b){
					res[j] = rev[count_tmp];
					count_tmp += 1;
				}
			};
		}
		else{
			// replace
			string rep;
			cin >> a >> b >> rep;
			int count_tmp = 0;
			rep(j, res.size()){
				if(a <= j && j <= b){
					res[j] = rep[count_tmp];
					count_tmp += 1;
				}
			};
		}
	};
}

