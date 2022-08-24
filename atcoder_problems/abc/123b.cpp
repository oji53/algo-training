#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <numeric>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(){
    int a[5];
    rep(i, 5) cin >> a[i];
    int t[5];
    int res = INT_MAX;
    
    rep(i, 5){
        t[i] = a[i];
        rep(j, 5){
            if(i != j){
                if(a[j]%10 == 0){
                    t[j] = a[j];
                }
                else{
                    t[j] = a[j] + (10 - a[j]%10);
                }
            }
        };
        res = min(res, accumulate(t,t+5,0));
    };
    cout << res << endl;
}
