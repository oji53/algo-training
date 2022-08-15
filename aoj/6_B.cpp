#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
	int n;
	cin >> n;
	
	char marks[4] = {'S','H','C','D'};
	char mark_array[n];
	int numbers[n];
	bool is_exist[4][13];	

	for (int i=0; i<n; ++i) {
		cin >> mark_array[i] >> numbers[i];
	}

	for (int i=0; i<4; ++i) {
		for (int j=0; j<13; ++j) {
			is_exist[i][j] = false;	
		}	
	}
	
	for(int i=0; i<n; ++i){
		if(mark_array[i] == marks[0]){
			is_exist[0][numbers[i]-1] = true;
		} 
		if(mark_array[i] == marks[1]){
			is_exist[1][numbers[i]-1] = true;
		} 
		if(mark_array[i] == marks[2]){
			is_exist[2][numbers[i]-1] = true;
		} 
		if(mark_array[i] == marks[3]){
			is_exist[3][numbers[i]-1] = true;
		} 
	}

	for (int i=0; i<4; ++i) {
		for (int j=0; j<13; ++j) {
			if(!is_exist[i][j]){
				cout << marks[i] << " " << j+1 << endl;
			}	
		}	
	}
}

