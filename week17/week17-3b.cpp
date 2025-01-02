//week17-3b.cpp
#include <iostream>
using namespace std;

int main(){
	char c;
	int a[7]={};
	while(cin >> c){
		a[c-'0']++;
	}
	for(int i = 1; i <= 6; i++){
		cout << i << ':' << a[i] << "\n";
	}
}
