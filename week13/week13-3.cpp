///week13-3.cpp
///前面leetcode 幫妳寫好了#include <iostream>, #include <vector>, using namespace std;

int main() {
    int a, b;///兩個數字
    vector<int>A, B;///兩個陣列
    while(cin >> a >> b){
        A.push_back(a);
        B.push_back(b);
    }
    for(int i = 0; i < A.size();i++){
        cout << A[i] << " ";
    }
}
