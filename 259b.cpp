#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
	double a, b, d;
	double a_new, b_new;
	cin >> a >> b >> d;
	double rad = d * (M_PI / 180);

	double r = sqrt(a*a+b*b);
	
	a_new = a * cos(rad);
	b_new = b * sin(rad);
	
	a_new = a*cos(rad) - b*sin(rad);
	b_new = a*sin(rad) + b*cos(rad);

	printf("%.11f %.11f\n",a_new, b_new);
		
}

