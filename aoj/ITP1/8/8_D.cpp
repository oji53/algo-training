#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
	string s,p;
	int count = 0;
	bool res = false;
	cin >> s >> p;
	
	rep(i, s.size()){
		count = 0;
		rep(j, s.size()){
			if(p[count] == s[(j+i)%s.size()]) count += 1;		
			else count = 0;
			
			if(count == p.size()) res = true;
		}
	}
	if(res) cout << "Yes";
	else cout << "No";
	cout << endl;
}

