///week13-3.cpp
///�e��leetcode ���p�g�n�F#include <iostream>, #include <vector>, using namespace std;

int main() {
    int a, b;///��ӼƦr
    vector<int>A, B;///��Ӱ}�C
    while(cin >> a >> b){
        A.push_back(a);
        B.push_back(b);
    }
    for(int i = 0; i < A.size();i++){
        cout << A[i] << " ";
    }
}
