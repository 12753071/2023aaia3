///week13-4.cpp
///�e��leetcode ���p�g�n�F#include <iostream>, #include <vector>, using namespace std;

int main() {
    int a, b;///��ӼƦr
    vector<int>A, B;///��Ӱ}�C
    while(cin >> a >> b){
        A.push_back(a);
        B.push_back(b);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int ans = 0;
    for(int i = 0; i < A.size();i++){
        cout << A[i] << " ";
        ans += abs(A[i]-B[i]);
    }
    cout << "���׬O" << ans;
}
