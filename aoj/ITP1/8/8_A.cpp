#include <bits/stdc++.h>
#include <cctype>
#include <string>
using namespace std;
int main(){
	string a;

	getline(cin, a);
	for(int i=0; i<a.size(); i++){
			if(isalpha(a[i]) && islower(a[i])) cout << (char)toupper(a[i]);
			else if(isalpha(a[i]) && isupper(a[i])) cout << (char)tolower(a[i]);
			else cout << a[i];
		}
	cout << endl;
}

