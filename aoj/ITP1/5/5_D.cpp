#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int x;
	cin >> n;

	for(int i=1; i<=n; ++i){
		if(i % 3 == 0 || i % 10 == 3){
			cout << " " << i;
		}
		else{
				x = (i/10);	
				while(true){
					if(x==0) break;
					if(x % 10 == 3){
						cout << " " << i;
						break;
					}
					x = (x/10);
				}

			}
		}
	cout << endl;
	}




