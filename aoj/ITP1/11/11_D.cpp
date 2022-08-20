#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

struct  Dice{
	int s[6];
	void roll(char order){
		int b;	
		if(order == 'E'){
			b = s[0];		
			s[0] = s[3];
			s[3] = s[5];
			s[5] = s[2];
			s[2] = b;
		}
		if(order == 'W'){
			b = s[0];
			s[0] = s[2];
			s[2] = s[5];
			s[5] = s[3];
			s[3] = b; 

		}
		if(order == 'S'){
			b = s[0];	
			s[0] = s[4];
			s[4] = s[5];
			s[5] = s[1];
			s[1] = b;
		}
		if(order == 'N'){
			b = s[0];	
			s[0] = s[1];
			s[1] = s[5];
			s[5] = s[4];
			s[4] = b;

		}
		if(order == 'R'){
			b = s[1]; 
			s[1] = s[3];
			s[3] = s[4];
			s[4] = s[2];
			s[2] = b;
		}
	}

	bool check_same(Dice a, Dice b){
		rep(i, 6) if(a.s[i] != b.s[i]) return false;
		return true;
	}

	bool check_same_2_dice(Dice d1, Dice d2){
		bool flag = false;
		rep(i, 4){
			d1.roll('N');	
			rep(j, 4){
				d1.roll('R');
				if(d1.check_same(d1, d2)) flag = true;
			};
		};

		d1.roll('W');
		rep(i, 4){
			d1.roll('N');	
			rep(j, 4){
				d1.roll('R');
				if(d1.check_same(d1, d2)) flag = true;
			};
		};

		d1.roll('W');
		rep(i, 4){
			d1.roll('N');	
			rep(j, 4){
				d1.roll('R');
				if(d1.check_same(d1, d2)) flag = true;
			};
		};
		d1.roll('W');
		rep(i, 4){
			d1.roll('N');	
			rep(j, 4){
				d1.roll('R');
				if(d1.check_same(d1, d2)) flag = true;
			};
		};
		if(flag) return true;	
		else return false;
	}
};

int main(){
	int n;
	Dice d[105];	
	bool flag = false;
	bool fflag = false;	
	cin >> n;
	
	rep(i, n){
		rep(j, 6){
			cin >> d[i].s[j];
		};
	};	
		
	rep(i, n){
		rep2(j, i+1, n){
			flag = d[i].check_same_2_dice(d[i], d[j]);
			if(flag){
				fflag = true;
			}
		};
		if(fflag) break;
	};

	if (!fflag) cout << "Yes" << endl;
	else cout << "No" << endl;
}

