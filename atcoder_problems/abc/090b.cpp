#include <bits/stdc++.h>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main(){
	int a,b;
	cin >> a >> b;

	int res = 0;

	rep2(i, a, b+1){
		string a;
		a = to_string(i);

		if(a[0] == a[4] && a[1] == a[3]) res += 1;
	};

	cout << res << endl;

}

