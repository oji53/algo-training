#include <bits/stdc++.h>
#include <set>
#include <type_traits>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
	int n;
	cin >> n;
		
	set<vector<int>> st;

	rep(i, n){
		int L;
		cin >> L;
		vector<int> A(L);
	
		rep(j, L) cin >> A[j];
		st.insert(A);
	};

	cout << st.size() << endl;
	
}
