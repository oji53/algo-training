#include <algorithm>
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	
	int min_tmp = 1000001;
	int max_tmp = -1000001;
	long long int sum = 0;
	for(int i = 0; i<n; ++i){
		cin >> a[i];
		min_tmp = min(min_tmp, a[i]);
		max_tmp = max(max_tmp, a[i]);
		sum += a[i];
	}

	/* cout << min_tmp << " " << max_tmp << " " << sum << endl; */
	printf("%d %d %lld\n",min_tmp,max_tmp,sum);
}

