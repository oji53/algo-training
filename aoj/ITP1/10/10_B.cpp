#include <bits/stdc++.h>
#include <cmath>
#include <math.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
	double a, b, C;
	double S, L, h;

	double rad;
	double pi = acos(-1);
	cin >> a >> b >> C;
	
	rad = C * pi / 180; 
	double c;

	c = sqrt(a*a+b*b-2*a*b*cos(rad));

	L = a + b + c;

	S = 0.5*(a*b*sin(rad));

	h = 2*S/a;

	printf("%.8f\n",S);
	printf("%.8f\n",L);
	printf("%.8f\n",h);


	

}

