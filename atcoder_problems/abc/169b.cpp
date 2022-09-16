#include <algorithm>
#include <bits/stdc++.h>
#include <regex>
#include <vector>
using namespace std;
using ll = long long;
#define all(obj) (obj).begin(), (obj).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    ll res = 1;
    rep(i, n) cin >> a[i];

    sort(all(a));

    if(a[0] == 0){
        cout << 0 << endl;
        return 0;
    }
    
    rep(i, n){
        
        if(a[i] > 1000000000000000000/res){
            cout << -1 << endl;
            return 0; 
        }

        res *= a[i];
        
    }; 
    
    cout << res << endl;

}
