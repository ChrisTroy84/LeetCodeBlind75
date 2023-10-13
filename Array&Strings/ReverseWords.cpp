#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int size = s.size();
        //two pointers
        int i =0;
        int j = 0;

        while (i < size) {
            while (i < size && s[i] == ' ') {
                i++;
            }
            if (i < size && j > 0) {
                s[j++] = ' ';
            }
            int start = j;
            while (i < size && s[i] != ' ') {
                s[j++] = s[i++];
            }
            //reverse words
            reverse(s.begin() + start, s.begin() + j);
        }
        s.resize(j);
        //reverse entire string
        reverse(s.begin(), s.end());
        return s;
    }
    //O(n) time complexity, O(1) space
};