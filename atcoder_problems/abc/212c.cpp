#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdlib>
using namespace std;
using ll = long long;
#define all(obj) (obj).begin(), (obj).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define yes "Yes"
#define no "No"

int main() {
    int n,m;
    cin >> n >> m;
    
    int a[202020];
    int b[202020];

    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];

    sort(a,a+n);
    sort(b,b+m);

    int res = INT_MAX;

    rep(i, n){
        int j = lower_bound(b,b+m,a[i]) - b;

        res = min(res, abs(a[i] - b[j]));
        if(j != 0) res = min(res, abs(a[i] - b[j-1]));
    };

    cout << res << endl;
}
