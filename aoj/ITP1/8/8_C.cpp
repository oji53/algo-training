#include <bits/stdc++.h>
#include <string>
using namespace std;

// 'a':97, 'A':65
int main(){
	string a;
	int count[26] = {0};
	getline(cin, a, '$');	

	for (int i=0; i<a.size(); ++i) {
		if(isalpha(a[i])){
			if(islower(a[i])) count[(int)a[i] - (int)'a'] += 1;
			else count[(int)a[i] - (int)'A'] += 1;
		}
	}

	for (int i=(int)'a'; i<(int)'a'+26; i++) {
		cout << (char)i << " : " << count[i-(int)'a'] << endl;	
	}		
}

