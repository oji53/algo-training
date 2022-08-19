#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
double x1,y1, x2,y2;
double dist;

cin >> x1 >> y1 >> x2 >> y2;

dist = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));

printf("%.8f\n",dist);

}

