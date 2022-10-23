#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){

	double r;
	double area, length;
	cin >> r;

	area = M_PI * r* r;
	length = 2 * M_PI * r;

	printf("%.5f %.5f", area, length);

}
