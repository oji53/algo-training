#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(obj) (obj).begin(), (obj).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define yes "Yes"
#define no "No"

int main() {
    int n,m;
    int res = 0;
    cin >> n >> m;
    int l[101010];
    int r[101010];
    rep(i, m) cin >> l[i] >> r[i];

    int min_tmp = 0;
    int max_tmp = 101010;
    rep(i, m){
       min_tmp = max(min_tmp, l[i]);
       max_tmp = min(max_tmp, r[i]);
    };

    if(max_tmp - min_tmp < 0) res = 0;
    else res = max_tmp - min_tmp + 1;

    cout << res << endl;

}
