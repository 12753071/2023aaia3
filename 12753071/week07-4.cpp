///week07-4.cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        while(ss >> word){///一直把字讀進去
            ///什麼事都不做
        }
        return word.length();
    }
};
