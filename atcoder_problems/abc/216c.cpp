#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(){
    long long int n;
    int count = 0; 
    string res;
    cin >> n;
    
    
    while (n > 0) {
        if(n % 2 == 0){
            n /= 2;
            res += 'B';
        } 
        else{
            n -= 1;
            res += 'A';
        }
    }

    reverse(res.begin(), res.end());
    
    cout << res << endl;
}
