#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0; //pointer for string s
        int j = 0; //pointer for string t

        while (i < s.size() && j < t.size()) {
            //always moving j pointer forward
            if (s[i] == t[j]) {
                i++;
                j++;
            }
            else if (s[i] != t[j]) {
                j++;
            }
        }
        //if s is a subsequence of t, i will = s length
        return i == s.length();
    }  
    //time = O(n), space = O(1)
};