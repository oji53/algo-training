#include <bits/stdc++.h>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
    long long int n;
    cin >> n;

    set<long long> ans;

    for (long long int i=1; i*i<=n; i++) {
        if(n%i == 0){
            ans.insert(i);
            ans.insert(n/i);
        } 
    }

    for (auto x : ans) {
        cout << x << endl; 
    }
    
}
