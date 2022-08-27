#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main(){
	long long int h;
	long long int res;	

	cin >> h;

	rep2(i, 1, 42){
		if(h < powl(2, i)){
			res = powl(2, i) - 1;
			break;
		}
	};
	cout << res << endl;

}

