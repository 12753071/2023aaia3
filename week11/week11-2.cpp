///week11-2.cpp
#include <iostream>
#include <vector>
#include <unordered_map>
///setting -compiler編譯器, 勾c++11

using namespace std;

int main(){
    vector<int>a;
    unordered_map<int,int>m;
    m[999] = 13;///hash map 雜湊表,可以快速找到或對應某個值
    m[137] = 7;
    cout << "m[999]的直是" << m[999] << endl;
    cout << "m[137]的直是" << m[137] << endl;
    return 0;
}
