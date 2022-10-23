#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main(){

	int a,b;
	cin >> a >> b;
	
	double fa = a;
	double fb = b;
	double res;
	res = fa / fb ;
	
	printf("%d %d %.5f\n",(a/b), (a%b), res);

}
