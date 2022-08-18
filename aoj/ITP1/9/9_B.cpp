#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
	string res;
	int m;
	int h[105];

	while(true){
		cin >> res;

		if(res == "-") break;

		cin >> m;
		rep(i,m) cin >> h[i];
		
		string front;
		string rear;
		rep(i,m){
			front = res.substr(h[i],res.size()-h[i]);
			rear = res.substr(0,h[i]);
			res = front + rear;
		};
			cout << res << endl;
	}	
}

