#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
	int n;
	int res_t = 0, res_h = 0;
	string card_t[1005], card_h[1005];

	cin >> n;
	rep(i, n){
		cin >> card_t[i] >> card_h[i]; 
	};

	rep(i, n){
		if(card_h[i] > card_t[i]) res_h += 3;	
		else if(card_h[i] < card_t[i]) res_t += 3;	
		else{
			res_t += 1;
			res_h += 1;
		}
	};
	cout << res_t << " " << res_h << endl;
}

