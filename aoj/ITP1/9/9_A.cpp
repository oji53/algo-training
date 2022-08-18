#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
	string W;
	string T;
	int count = 0;

	cin >> W;
	getline(cin, T, '$');
	
	// Tを小文字化
	transform(T.begin(), T.end(), T.begin(), ::tolower);

	istringstream iss(T);
	string word;
	while(iss >> word){
		if(word == W){
			count += 1;
		}
	}
	cout << count << endl;
}

