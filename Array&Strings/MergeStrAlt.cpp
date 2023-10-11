#include <iostream>
#include <string>

using namespace std;

class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            //create empty string:
            string res = "";
            int i = 0;

            //loop through the two words:
            while (i < word1.length() || i < word2.length()) {
                if (i < word1.length()) {
                    res += word1[i];
                }
                if (i < word2.length()) {
                    res += word2[i];
                }
                i++;
            }
            return res;
        }
};