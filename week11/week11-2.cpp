///week11-2.cpp
#include <iostream>
#include <vector>
#include <unordered_map>
///setting -compiler�sĶ��, ��c++11

using namespace std;

int main(){
    vector<int>a;
    unordered_map<int,int>m;
    m[999] = 13;///hash map �����,�i�H�ֳt���ι����Y�ӭ�
    m[137] = 7;
    cout << "m[999]�����O" << m[999] << endl;
    cout << "m[137]�����O" << m[137] << endl;
    return 0;
}
