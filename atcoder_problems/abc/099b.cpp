#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main(){
	int a,b;
	cin >> a >> b;
	
	int sum = 0;
	rep2(i, 1, b-a+1) sum += i;
	
	cout << sum - b << endl; 

}

