#include <bits/stdc++.h>
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
	}

	int get_top(){
		return s[0];
	}
};

int main(){
	string states;
	Dice d;	
	rep(i, 6) cin >> d.s[i];

	cin >> states;

	rep(i, states.size()) d.roll(states[i]);

	cout << d.get_top() << endl;

}

