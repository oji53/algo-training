#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdio>
#include <future>
#include <type_traits>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define yes "Yes"
#define no "No"
using ll = long long;

// int bubble_sort(int a[], int n) {
//   bool flag = true;
//   int count = 0;
//   while (flag) {
//     flag = false;
//     for (int i = n - 1; i > 0; i--) {
//       if (a[i] < a[i - 1]) {
//         int tmp = a[i];
//         a[i] = a[i - 1];
//         a[i - 1] = tmp;
//         flag = true;
//         count++;
//       }
//     }
//   }
//   return count;
// }


void bubble_sort(string a[], int n){
  rep(i, n){
    for (int j = i; j>i; i--) {
      if(a[j] < a[j-1]) swap(a[j], a[j-1]);
    }
  }
}

void selection_sort(string a[], int n){
  rep(i, n){
    int minj = i;
    rep(j, n){
      if(a[j] < a[minj]) minj = j;
    }
    swap(a[i], a[minj]);
  }
}

int main() {
  int n;
  cin >> n;
  string a[n];
  string b[n];
  int res = 0;
  rep(i, n) cin >> a[i];
  rep(i, n) b[i] = a[i];

  bubble_sort(a, n);
  selection_sort(b, n);

  rep(i, n) {
    if (i != n - 1)
      cout << a[i] << " ";
    else
      cout << a[i] << endl;
  }

  cout << res << endl;
}
