#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main(){
	int n,k,q;
	cin >> n >> k >> q;
	vector<int>points(n+1, k-q);
	int counts[100005] = {0};

	int a;
	rep2(i, 1, q+1){
		cin >> a;
		counts[a] += 1;	
	} 

	rep2(i, 1, n+1){
		points[i] += counts[i];
		if(points[i] > 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	} 
}

