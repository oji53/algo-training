#include <bits/stdc++.h>
#include <set>
#include <vector>
using namespace std;
using ll = long long;
#define all(obj) (obj).begin(), (obj).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define yes "Yes"
#define no "No"

int main() {
    int n;
    int res = 1;
    cin >> n;
    vector<string> s(n);
    vector<int> t(n);
    set<string> orig;
    bool is_orig[n];
    rep(i, n){
        cin >> s[i] >> t[i];
        is_orig[i] = false;
        if(!orig.count(s[i])){
            orig.insert(s[i]);
            is_orig[i] = true;
        }

    } 
    
    int score_max = 0;
    rep(i, n){
        if(is_orig[i]){
            if(score_max < t[i]){
                score_max = t[i];
                res = i+1;
            }
        }
    };

    cout << res << endl;


 
}
