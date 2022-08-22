#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
	int N;
	int a[200005];
	int count = 0;
	/* int max_chain = 1; */
	cin >> N;
	rep2(i, 1, N+1){
		cin >> a[i];
	}

	if(*min_element(a+1, a+N) != 1){
		cout << -1 << endl;
		return 0;
	}

	int j = 1;	
	rep2(i, 1, N+1){
		if(a[i] != j){
			count += 1;
		}
		else {
			j += 1;
		}
	};
	
	cout << count << endl;

}

