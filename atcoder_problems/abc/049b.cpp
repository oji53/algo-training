#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(obj) (obj).begin(), (obj).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define yes "Yes"
#define no "No"

int main() {
    int h, w;
    cin >> h >> w;
    char c[h][w];
    char res[2*h][w];

    rep(i, h){
        rep(j, w){
            cin >> c[i][j];
        };
    };
    
    rep(i, 2*h){
        rep(j, w){
            res[i][j] = c[(i)/2][j];
            cout << res[i][j];
            if(j == w-1) cout << endl;
        };
    };



}
