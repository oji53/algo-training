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
};

int main(){
	char direction[4] = {'W','E','S','N'};
	Dice d;	
	int q;
	int upper;
	int front;
	rep(i, 6) cin >> d.s[i];
	cin >> q;

	rep(i, q){
		cin >> upper >> front;
		
		while (true) {
			if(d.get_front() == front && d.get_top() == upper){
				cout << d.get_right() << endl;
				break;
			}
			else {
				d.roll(direction[rand()%4]);
			}
		}

	};

}

