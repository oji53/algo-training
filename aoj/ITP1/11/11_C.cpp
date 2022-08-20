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

	int get_top(){
		return s[0];
	}
	int get_right(){
		return s[2];
	}
	int get_left(){
		return s[3];
	}
	int get_front(){
		return s[1];
	}
	int get_back(){
		return s[4];
	}
	int get_down(){
		return s[5];
	}

	bool check_same(Dice a, Dice b){
		rep(i, 6) if(a.s[i] != b.s[i]) return false;
		return true;
	}
};

int main(){
	char direction[4] = {'W','E','S','N'};
	Dice d1, d2;	
	bool flag = false;

	rep(i, 6) cin >> d1.s[i];
	rep(i, 6) cin >> d2.s[i];
	
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
	
	if (flag) cout << "Yes" << endl;
	else cout << "No" << endl;
}

