///week15-1.cpp not ok
#include <iostream>
#include <string>
using namespace std;

int main(){
	string hello;
	int t = 1;
	while(cin >> hello){
		if(hello == "#")break;

		cout << "Case " << t << ": ENGLISH\n";
		t++;
	}
}
